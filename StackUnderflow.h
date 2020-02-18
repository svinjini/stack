#pragma once
#include <iostream>
#include <exception>

class StackUnderflow:public std::exception
{
private:
	const char* reason;
public:
	StackUnderflow() :reason("StackUnderflow") {}
	const char* what()  const { return(reason); }
};

