#include "CircularBufferP.h"

CircularBufferP::CircularBufferP(int size, int newIndex)
{
	size_ = ((size > 0) ? size : 1); // Size default = 1
	newestIndex_ = ((newIndex > 0 && newIndex < size) ? newIndex : 0);

	// Allocate memory on the heap
	arrayPtr_ = new Point[size_];

	// Default constructor sets all to 0
}


CircularBufferP::~CircularBufferP()
{
	// Free the allocated memory
	delete[] arrayPtr_;
}

CircularBufferP & CircularBufferP::insert(double x, double y)
{
	arrayPtr_[newestIndex_] = Point(x,y);
	newestIndex_++;
	if (newestIndex_ == size_) {
		newestIndex_ = 0;
	}
	return *this;
}

Point CircularBufferP::meanValue() const
{
	double xTemp = 0;
	double yTemp = 0;
	for (size_t i = 0; i < size_; i++)
	{
		xTemp += arrayPtr_[i].getX();
		yTemp += arrayPtr_[i].getY();
	}

	return Point(xTemp / size_, yTemp / size_);
}

void CircularBufferP::print() const
{
	int startIndex = (newestIndex_ == 0 ? (size_ - 1) : (newestIndex_ - 1));

	for (int i = startIndex; i >= 0; i--)
	{
		arrayPtr_[i].print();
	}

	for (int i = size_ - 1; i > startIndex; i--)
	{
		arrayPtr_[i].print();
	}

	cout << endl << endl;
}
