#pragma once

#include <iostream>

#include "LinkedList.h"
// Binary Search Tree implementation with duplicate values allowed
// Duplicates implemented similar to count field technique, that is each node
// contains one linked list of all the values with the same key

template <class T>
class BST {
 private:
  class TreeNode {
   public:
    int key;
    LinkedList<T> data;
    // T data;
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
      } else if (insertKey < tempKey) {
        prevNode = tempNode;
        tempNode = tempNode->left;
      } else {
        delete insNode;
        tempNode->data.addToHead(data);
        return;
      }
    }

    if (insertKey > prevNode->key) {
      prevNode->right = insNode;
    } else {
      prevNode->left = insNode;
    }
  }
};
