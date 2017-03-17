#pragma once
#include <iostream>
#include "Point.h"
using namespace std;
class CircularBufferP
{
public:
	CircularBufferP(int, int);
	~CircularBufferP();
	CircularBufferP& insert(double, double);
	Point meanValue() const;
	void print() const;
private:
	int size_;
	int newestIndex_;
	Point* arrayPtr_;
};

