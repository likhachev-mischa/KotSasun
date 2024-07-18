#pragma once
#include <iostream>

template <class T>
struct Node {
	T data;
	Node* next;

	Node() { next = nullptr; }

	Node(const T& data) {
		this->data = data;
		next = nullptr;
	}

	Node(const T& data, Node* next) {
		this->data = data;
		this->next = next;
	}
};

template <class T>
class LinkedList {
private:
	Node<T>* head;

	Node<T>* findPosition(const T& data) {
		Node<T>* current = head;

		if (data < current->data) {
			return nullptr;
		}

		Node<T>* result = nullptr;

		while (data > current->data && current->next != nullptr) {
			result = current;
			current = current->next;
		}
		if (current->next == nullptr && data > current->data) {
			result = current;
		}

		return result;
	}

public:
	LinkedList() { head = nullptr; }

	LinkedList(const T& data) { head = new Node<T>(data); }

	template <class T>
	class Iterator
		: public std::iterator<std::forward_iterator_tag, T, ptrdiff_t, T*, T&> {
		Node<T>* itr;

	public:
		Iterator() : itr(nullptr) {}
		Iterator(Node<T>* other) : itr(other) {}

		T& operator*() { return itr->data; }
		T& operator->() { return itr->data; }

		const T operator*() const { return itr->data; }
		const T operator->() const { return itr->data; }

		Node<T>* GetNode() { return itr; }

		Iterator& operator++() {
			itr = itr->next;
			return *this;
		}
		Iterator operator++(int) {
			Iterator tmp = *this;
			++(*this);
			return tmp;
		}

		bool operator==(const Iterator& other) const { return itr == other.itr; }
		bool operator!=(const Iterator& other) const { return itr != other.itr; }
	};
	typedef Iterator<T> iterator;
	typedef Iterator<const T> const_iterator;

	iterator begin() { return iterator(head); }
	iterator end() { return iterator(nullptr); }

	bool isEmpty() { return head == nullptr; }

	void addToHead(const T& data) {
		Node<T>* newHead = new Node<T>(data, head);
		head = newHead;
	}

	void addAfterNode(const T& data, Node<T>* elem) {
		Node<T>* current = elem;
		Node<T>* newNext = new Node<T>(data, elem->next);
		current->next = newNext;
	}

	void deleteFromHead() {
		Node<T>* current = head;
		head = head->next;

		current->next = nullptr;
		delete current;
		current = nullptr;
	}

	void deleteAfterNode(Node<T>* elem) {
		Node<T>* current = elem;
		Node<T>* toDelete = current->next;
		current->next = toDelete->next;

		toDelete->next = nullptr;
		delete toDelete;
		toDelete = nullptr;
	}

	~LinkedList() {
		while (!isEmpty()) {
			deleteFromHead();
		}
	}
};
