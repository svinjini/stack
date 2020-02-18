#pragma once

template <class T>
class Stack
{
	virtual ~Stack() {};
	virtual void push(const T& e) = 0;
	virtual bool isEmpty() = 0;
	virtual const T& pop() = 0;
		
};

