#pragma once

#include <algorithm>
#include <fstream>
#include <iostream>

#include "ITree.h"
#include "LinkedList.h"

template <class T>
class AVL : public ITree<T> {
private:
	class TreeNode {
	public:
		int key;
		int height;
		LinkedList<T> data;
		TreeNode* left;
		TreeNode* right;

		TreeNode() : key(-1), height(1), data(), left(nullptr), right(nullptr) {}

		TreeNode(T data)
			: key(data.key()),
			height(1),
			data(data),
			left(nullptr),
			right(nullptr) {}

		~TreeNode() {
			if (left) {
				delete left;
				left = nullptr;
			}

			if (right) {
				delete right;
				right = nullptr;
			}
		}
	};

	TreeNode* _root;

	int height(TreeNode* node) {
		if (!node) return 0;
		return node->height;
	}

	int getBalance(TreeNode* node) {
		if (!node) return 0;
		return (height(node->left) - height(node->right));
	}

	TreeNode* rightRotate(TreeNode* y) {
		//       y
		//      / \
	    //     x   T4
		//    / \
	    //   z  T3
		//  / \
	    // T1 T2

		TreeNode* x = y->left;
		TreeNode* T3 = x->right;

		x->right = y;
		y->left = T3;

		y->height = max(height(y->left), height(y->right)) + 1;
		x->height = max(height(x->left), height(x->right)) + 1;

		return x;
	}

	TreeNode* leftRotate(TreeNode* x) {
		//       x
		//      / \
	    //     T1  y
		//        / \
	    //       T2  z
		//          / \
	    //         T3 T4

		TreeNode* y = x->right;
		TreeNode* T2 = y->left;

		y->left = x;
		x->right = T2;

		x->height = max(height(x->left), height(x->right)) + 1;
		y->height = max(height(y->left), height(y->right)) + 1;

		return y;
	}

	TreeNode* insert(TreeNode* node, T data) {
		if (!node) return new TreeNode(data);

		if (data.key() < node->key) {
			node->left = insert(node->left, data);
		}
		else if (data.key() > node->key) {
			node->right = insert(node->right, data);
		}
		else {
			node->data.addToHead(data);
			return node;
		}

		node->height = 1 + max(height(node->left), height(node->right));

		int balance = getBalance(node);

		// Left Left Case
		if (balance > 1 && data.key() < node->left->key) return rightRotate(node);

		// Right Right Case
		if (balance < -1 && data.key() > node->right->key) return leftRotate(node);

		// Left Right Case
		if (balance > 1 && data.key() > node->left->key) {
			node->left = leftRotate(node->left);
			return rightRotate(node);
		}

		// Right Left Case
		if (balance < -1 && data.key() < node->right->key) {
			node->right = rightRotate(node->right);
			return leftRotate(node);
		}

		return node;
	}

public:
	AVL() : _root(nullptr) {}

	~AVL() {
		if (_root) {
			delete _root;
			_root = nullptr;
		}
	}

	void insert(T data) { _root = insert(_root, data); }

	std::queue<LinkedList<T>*> getLevel(int height) {

		std::queue<std::pair<TreeNode*, int>> que;
		que.push({ _root, 1 });

		std::queue<LinkedList<T>*> level;

		int prevDepth = 1;
		while (!que.empty()) {
			auto currentPair = que.front();
			que.pop();

			TreeNode* currentNode = currentPair.first;
			int currentDepth = currentPair.second;

			if (height != 0 && currentDepth > height) break;

			if (currentDepth != prevDepth) {
				prevDepth = currentDepth;
			}
			if (currentDepth == height)
			{
				if (currentNode)
				{
					level.push(&currentNode->data);
				}
				else
				{
					level.push(nullptr);
					continue;
				}
			}

			if (currentNode)
			{
				que.push({ currentNode->left, currentDepth + 1 });
				que.push({ currentNode->right, currentDepth + 1 });
			}
			else
			{
				que.push({ nullptr, currentDepth + 1 });
				que.push({ nullptr, currentDepth + 1});

			}
		}
		return level;
	}

};