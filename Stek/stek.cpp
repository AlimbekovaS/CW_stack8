#include"stek.h"
#include"library.h"

template<typename type>
inline Stack<type>::Stack(type * mass, int n)
{
	this->lenght = n;
	
	els = new type[this->lenght];
	this->buf_size = this->lenght;
	for (int i = 0;i < this->lenght;i++)
	{
		this->els[i] = mass[i];
	}
}
template<typename type>
Stack<type>::Stack(const Stack & obj)
{
	this->lenght = obj.lenght;
	this->buf_size = obj.lenght;
	this->els = new type[lenght];
	for (int i = 0;i < lenght;i++)
		els[i] = obj.els[i];
}
template<typename type>
type & Stack<type>::top()
{
	return els[lenght - 1];
}
template<typename type>
void Stack<type>::push(type e)
{
	if (buf_size == 0)
	{
		buf_size = 2;
		els = new type[buf_size];
	}
	else if (buf_size <= lenght)
	{
		buf_size *= 2;
		type *tmp = new type[buf_size];
		for (int i = 0;i < lenght;i++)
		{
			tmp[i] = els[i];
		}
		delete[]els;
		els = tmp;

	}
	els[lenght++] = e;
}
template<typename type>
size_t Stack<type>::size()
{
	return lenght;
}

template<typename type>
bool Stack<type>::empty()
{
	return (size()==0);
}

template<typename type>
void Stack<type>::pop()
{
	lenght--;
}
template<typename type>
Stack<type>::~Stack()
{
	delete[]els;
	els = nullptr;
}