#pragma once
#include <iostream>
#include <exception>


class StackOverflow : public std::exception
{
private:
	const char* reason;
public:
	StackOverflow() :reason("StackOverflow") {}
	const char* what()  const { return(reason); }
};

