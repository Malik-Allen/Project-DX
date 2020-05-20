#ifndef PQUEUE_H
#define PQUEUE_H

#include "SList.h"

template <typename T>
class PQueue
{
	// List containing data values
	SList<T> data;

	// List containing priority keys
	SList<int> key;

public:


	// Insert a data value sorted by priority 
	void push(const int priority, const T& value)
	{
		if (key.size() == 0)
		{
			key.push_front(priority);
			data.push_front(value);
		}
		else
		{

			SList<T>::Iterator data_iterator;
			SList<int>::Iterator key_iterator;

			data_iterator = data.begin();
			key_iterator = key.begin();
			while (key_iterator != key.end()) {
				if (priority < *key_iterator) {	
					key.insert(key_iterator, priority);
					data.insert(data_iterator, value);
					break;
				}
				++key_iterator;
				++data_iterator;
			}

			if (key_iterator == key.end()) {
				key.push_back(priority);
				data.push_back(value);
			}
		}
	}

	// Remove first element from priority queue
	// Precondition: Priority queue not empty
	void pop()
	{
		if (!empty()) {
			key.pop_front();
			data.pop_front();
		}
	}

	// return reference to first value in priority queue
	// precondition: list is not empty
	T& peek()
	{
		SList<T>::Iterator data_iterator;
		data_iterator = data.begin();
		return *data_iterator;
	}

	// check for empty priority queue
	bool empty() const
	{
		return key.size() == 0;
	}

	// return number of members
	size_t size() const
	{
		return key.size();
	}

	// remove all nodes
	void clear()
	{
		key.clear();
		data.clear();
	}
};

#endif
