#pragma once
#include <iostream>

	template <class T>
	struct Node
	{
		T data;
		Node* next;

		Node()
		{
			next = nullptr;
		}

		Node(const T& data)
		{
			this->data = data;
			next = nullptr;
		}

		Node(const T& data, Node* next)
		{
			this->data = data;
			this->next = next;
		}
	};

template <class T>
class LinkedList
{

	Node<T>* head;

	


	Node<T>* findPosition(const T& data)
	{
		Node<T>* current = head;

		if (data < current->data)
		{
			return nullptr;
		}

		Node<T>* result = nullptr;

		while (data > current->data && current->next != nullptr)
		{
			result = current;
			current = current->next;
		}
		if (current->next == nullptr && data > current->data)
		{
			result = current;
		}

		return result;
	}

	void printElemRecursive(Node<T>* elem)
	{
		std::cout << elem->data << " ";
		if (elem->next)
		{
			printElemRecursive(elem->next);
		}
	}

	T sumElemRecursive(Node<T>* elem)
	{
		T result = elem->data;
		if (elem->next)
		{
			return result + sumElemRecursive(elem->next);
		}
		return result;
	}

public:
	LinkedList()
	{
		head = nullptr;
	}	
	template <class T>
	class Iterator : public std::iterator<std::forward_iterator_tag, T, ptrdiff_t ,T*, T&>
	{
		Node<T>* itr;
		
	public:

		Iterator() : itr(nullptr) {}
		Iterator(Node<T>* other) : itr(other) {}

		T& operator*() { return itr->data; }
		T& operator->() { return itr->data; }

		const T operator *() const {return itr->data;}
		const T operator->() const {return itr->data;}
		

		Node<T>* GetNode() { return itr; }

		Iterator& operator++()
		{
			itr = itr->next;
			return *this;
		}
		Iterator operator++(int)
		{
			iterator tmp = *this;
			++(*this);
			return tmp;
		}

		bool operator == (const Iterator& other) const { return itr == other.itr; }
		bool operator != (const Iterator& other) const { return itr != other.itr; }

	};
	typedef Iterator<T> iterator;
	typedef Iterator<const T> const_iterator;

	iterator begin() { return iterator(head); }
	iterator end() { return iterator(nullptr); }

	void initializeFromArray(T* array, int n)
	{
		head = new Node;
		Node* current = head;
		current->data = array[0];

		for (int i = 1; i < n; ++i)
		{
			current->next = new Node(array[i]);
			current = current->next;
		}
	}

	void initializeFromArrayReversed(T* array, int n)
	{
		head = new Node;
		Node* current = head;
		current->data = array[n - 1];

		for (int i = n - 2; i >= 0; --i)
		{
			current->next = new Node(array[i]);
			current = current->next;
		}
	}

	void initializeFromArrayInOrder(T* array, int n)
	{
		head = new Node(array[0]);
		for (int i = 1; i < n; ++i)
		{
			T data = array[i];
			Node* insertionNode = findPosition(data);

			if (insertionNode == nullptr)
			{
				addToHead(data);
			}
			else
			{
				addAfterNode(data, insertionNode);
			}
		}
	}

	bool isEmpty()
	{
		return head == nullptr;
	}

	void addToHead(const T& data)
	{
		Node<T>* newHead = new Node<T>(data, head);
		head = newHead;
	}

	void addAfterNode(const T& data, Node<T>* elem)
	{
		Node<T>* current = elem;
		Node<T>* newNext = new Node<T>(data, elem->next);
		current->next = newNext;
	}

	void addAfterIndex(const T& data, int idx)
	{
		if (idx < 0)
		{
			addToHead(data);
			return;
		}

		int counter = 0;
		Node<T>* current = head;
		while (counter < idx)
		{
			current = current->next;
			++counter;
		}

		addAfterNode(data, current);
	}

	void deleteFromHead()
	{
		Node<T>* current = head;
		head = head->next;

		current->next = nullptr;
		delete current;
		current = nullptr;
	}

	void deleteAfterNode(Node<T>* elem)
	{
		Node<T>* current = elem;
		Node<T>* toDelete = current->next;
		current->next = toDelete->next;

		toDelete->next = nullptr;
		delete toDelete;
		toDelete = nullptr;
	}

	void print()
	{
		Node<T>* current = head;
		while (current != nullptr)
		{
			std::cout << current->data << " ";
			current = current->next;
		}
	}

	void printRecursive()
	{
		printElemRecursive(head);
	}

	T sumRecursive()
	{
		return sumElemRecursive(head);
	}

	template <class T>
	friend std::ostream& operator <<(std::ostream& os, const LinkedList<T>& obj)
	{
		Node<T>* current = obj.head;
		while (current != nullptr)
		{
			os << current->data << " ";
			current = current->next;
		}
		return os;
	}

	~LinkedList()
	{
		while (!isEmpty())
		{
			deleteFromHead();
		}
	}
};



