#pragma once
#include <iostream>
using namespace std;
class CircularBuffer
{
public:
	CircularBuffer(int = 10);
	~CircularBuffer();
	CircularBuffer& insert(int);
	double meanValue() const;
	void print() const;
private:
	int size_;
	int newestIndex_;
	int* arrayPtr_;
};

