#pragma once
#include"library.h"
template<typename type>
class Stack
{
private:
	type *els;
	size_t lenght;
	size_t buf_size;
public:
	Stack()
	{
		buf_size = 0;
		lenght = 0;
		els = nullptr;
	}
	Stack(type*mass, int n);
	Stack(const Stack &obj);
	type & top();
	
	void push(type e);
	void pop();
	size_t size();
	bool empty();

	~Stack();

};