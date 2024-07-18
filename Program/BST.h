#pragma once

#include <fstream>
#include <iostream>
#include <queue>
#include <utility>

#include "ITree.h"
#include "LinkedList.h"

template <class T>
class BST : public ITree<T> {
private:
	class TreeNode {
	public:
		int key;
		LinkedList<T> data;
		TreeNode* left;
		TreeNode* right;

		TreeNode() : key(-1), data(), left(nullptr), right(nullptr) {}

		TreeNode(T data)
			: key(data.key()), data(data), left(nullptr), right(nullptr) {}

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

public:
	BST() : _root(nullptr) {}

	~BST() {
		if (_root) {
			delete _root;
			_root = nullptr;
		}
	}

	void insert(T data) {
		TreeNode* insNode = new TreeNode(data);
		int insertKey = insNode->key;

		if (!(_root)) {
			_root = insNode;
			return;
		}

		TreeNode* tempNode = _root;
		TreeNode* prevNode = nullptr;

		while (tempNode) {
			int tempKey = tempNode->key;

			if (insertKey > tempKey) {
				prevNode = tempNode;
				tempNode = tempNode->right;
			}
			else if (insertKey < tempKey) {
				prevNode = tempNode;
				tempNode = tempNode->left;
			}
			else {
				delete insNode;
				tempNode->data.addToHead(data);
				return;
			}
		}

		if (insertKey > prevNode->key) {
			prevNode->right = insNode;
		}
		else {
			prevNode->left = insNode;
		}
	}

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

			que.push({ currentNode->left, currentDepth + 1 });

			que.push({ currentNode->right, currentDepth + 1 });
		}
		return level;
	}

};
