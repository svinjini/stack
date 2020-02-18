#include "StackArray.h"

template <class T>
StackArray<T>::StackArray(int size_) {
	try {
		array = new T[size = size_];
	}
	catch (...) {
		throw WrongStackSize();
	}
	top = 0;
}


template <class T>
StackArray<T>::StackArray(const StackArray<T>& src) {
	try {
		array = new T[size = src.size];
	}
	catch(...){
		throw WrongStackSize();
	}
	for (int i = 0; i < src.top; ++i) {
		array[i] = src.array[i];
	}
	top = src.top;
}

template <class T>
void StackArray<T>::push(const T& e) 
{
	if (top == size) {
		throw WrongStackSize;
	}
	++top;	
	array[top] = e;
}

template <class T>
const T& StackArray<T>::pop() {
	if (top == 0) {
		throw StackUnderflow;
	}
	return array[--top]
}