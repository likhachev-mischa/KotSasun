#pragma once

#include <iostream>
// Binary Search Tree implementation with duplicate values allowed

template <class T>
class BST {
 private:
  class TreeNode {
   public:
    T data;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : data(), left(nullptr), right(nullptr) {}

    TreeNode(T data) : data(data), left(nullptr), right(nullptr) {}

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

    // T data() { return _data; }
    // TreeNode* left() { return _left; }
    // TreeNode* right() { return _right; }

    // void setLeft(TreeNode* left) { _left = left; }
    // void setRight(TreeNode* right) { _right = right; }
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

    if (!(_root)) {
      _root = insNode;
      return;
    }

    TreeNode* tempNode = _root;
    TreeNode* prevNode = nullptr;

    while (tempNode) {
      int tempKey = tempNode->data.key();
      int insertKey = data.key();

      if (insertKey >= tempKey) {
        prevNode = tempNode;
        tempNode = tempNode->right;
      } else {
        prevNode = tempNode;
        tempNode = tempNode->left;
      }
    }

    if (data.key() >= prevNode->data.key()) {
      prevNode->right = insNode;
    } else {
      prevNode->left = insNode;
    }
  }
};
