#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H

#include "SList.h"

template <typename T>
class DynamicStack
{
	SList<T> data;

public:
	
	void push(const T& value)
	{
		data.push_front(value);
	}

	void pop()
	{
		data.pop_front();
	}

	T& top()
	{
		return data.front();
	}

	bool empty() const
	{
		return data.empty();
	}

	size_t size() const
	{
		return data.size();
	}

	void clear()
	{
		data.clear();
	}
};

#endif
