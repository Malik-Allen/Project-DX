#ifndef SLIST_H
#define SLIST_H

template <typename T>
class SList
{
	// SList node
	struct Node
	{
		T value;		// the value
		Node *next;		// next node

		// a convenient constructor
		Node(const T& v) : value(v), next(nullptr) { }
	};

	// pointers to first and last nodes in the list
	Node *head, *tail;
	size_t sz;

public:

	// default constructor
	SList() : head(nullptr), tail(nullptr), sz(0) { }

	// destructor
	~SList()
	{
		clear();
	}

	// remove all nodes
	void clear()
	{
		// remove a node until empty
		while (!empty())
			pop_front();
	}

	// check for empty list
	bool empty() const
	{
		return sz == 0;
	}

	// return number of members
	size_t size() const
	{
		return sz;
	}

	// return reference to first value in list
	// precondition: list is not empty
	T& front()
	{
		return head->value;
	}

	// return reference to last value in list
	// precondition: list is not empty
	T& back()
	{
		return tail->value;
	}

	// insert a value at the beginning of the list
	void push_front(const T& value)
	{
		// create new node with value
		Node *new_node = new Node(value);

		if (empty()) {
			// if the list is empty, new node becomes both head and tail
			head = tail = new_node;
		}
		else {
			// if the list is not empty, insert new node before head
			new_node->next = head;
			head = new_node;
		}

		++sz;
	}

	// insert a value at the end of the list
	void push_back(const T& value)
	{
		// create new node with value
		Node *new_node = new Node(value);

		if (empty()) {
			// if the list is empty, new node becomes both head and tail
			head = tail = new_node;
		}
		else {
			// if the list is not empty, insert new node after tail
			tail->next = new_node;
			tail = new_node;
		}

		++sz;
	}

	// remove first element from the list
	// precondition: list is not empty
	void pop_front()
	{
		// save pointer to old head
		Node *old_head = head;

		if (head == tail)
			// if list contained only one element, list is now empty
			head = tail = nullptr;
		else
			// otherwise, reposition head pointer to next element in list
			head = head->next;

		// blow away the old head node
		delete old_head;

		--sz;
	}

	// remove last element from the list
	// precondition: list is not empty
	void pop_back()
	{
		// save old list tail
		Node *old_tail = tail;

		if (head == tail) {
			// if list contained only one element, list is now empty
			head = tail = nullptr;
		}
		else {
			// find new tail by starting at head
			tail = head;
			while (tail->next != old_tail)
				tail = tail->next;
			// the new tail is the node before old tail
			tail->next = nullptr;
		}

		// blow away old tail node
		delete old_tail;

		--sz;
	}


	// Iterator class -- represents a position in the list.
	// Used to gain access to individual elements, as well as
	// insert, find, and erase elements
	class Iterator
	{
		// the iterator holds a pointer to the "current" list node
		Node *node;

		// SList class needs access to private members of Iterator
		friend class SList;

		// private parameterized constructor: used by SList::begin() method
		Iterator(Node *n) : node(n) { }

	public:

		// default constructor: iterator not valid until initialized
		Iterator() : node(nullptr) { }

		// equality operator (==)
		// checks whether both iterators represent the same position
		bool operator== (const Iterator& rhs) const
		{
			return node == rhs.node;
		}

		// inequality operator (!=)
		// checks whether iterators represent different positions
		bool operator!= (const Iterator& rhs) const
		{
			return node != rhs.node;
		}

		// dereference operator (unary *)
		// returns a reference to the data value at the iterator position
		// precondition: iterator is valid
		T& operator* () const
		{
			return node->value;
		}

		// preincrement operator
		// advances to next node and returns itself
		Iterator& operator++()
		{
			node = node->next;
			return *this;
		}

		// postincrement operator
		// advances to next node and returns old copy of itself
		Iterator operator++(int)
		{
			Iterator tmp = *this;
			node = node->next;
			return tmp;
		}
	};


	// return iterator set to first element in list
	Iterator begin()
	{
		return head;
	}

	// return iterator past last element in list
	Iterator end()
	{
		return nullptr;
	}

	// erase the list element at pos
	// precondition: pos is a valid iterator
	// returns: an iterator at the element immediately after pos
	Iterator erase(Iterator pos)
	{
		Node *target = pos.node;  // save target to be erased

		++pos;  // advance iterator

		if (target == head)
			pop_front();
		else if (target == tail)
			pop_back();
		else {
			// find the node before target
			Node *tmp = head;
			while (tmp->next != target)
				tmp = tmp->next;
			// unlink target node
			tmp->next = target->next;
			// delete target node
			delete target;
			--sz;
		}

		return pos; // return advanced iterator
	}

	// insert a value before pos
	// precondition: pos is a valid iterator or end()
	// returns: an iterator at the inserted value
	Iterator insert(Iterator pos, const T& value)
	{
		if (pos == begin()) {
			// insert new node before head
			push_front(value);
			return head;
		}
		else if (pos == end()) {
			push_back(value);
			return tail;
		}
		else {
			// find the node before pos
			Node *tmp = head;
			while (tmp->next != pos.node)
				tmp = tmp->next;

			// create new node to be inserted
			Node *new_node = new Node(value);

			// insert new_node between tmp and pos
			tmp->next = new_node;
			new_node->next = pos.node;

			++sz;

			return new_node;
		}
	}

	// find a value in the list
	// returns: a valid iterator if found, end() if not found
	Iterator find(const T& value)
	{
		for (Node *node = head; node; node = node->next)
			if (node->value == value)
				return node;
		return end();
	}
};

#endif
