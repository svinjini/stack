#pragma once
#include <exception>


template <class T>
class StackArray: public Stack<T>
{
public:
	StackArray(int size_ = 100);
	StackArray(const StackArray<T>& src);
	virtual ~StackArray() { delete[] array; }
	void push(const T& e);
	const T& pop();
	bool isEmpty() { return (top == 0); }
private:
	int size;
	T* array;
	int top;
};

