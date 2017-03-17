#include "CircularBuffer.h"

CircularBuffer::CircularBuffer(int size)
{
	size_ = ((size > 0) ? size : 10);
	newestIndex_ = 0;

	// Allocate memory on the heap
	arrayPtr_ = new int[size_];

	// Init all to 0
	for (size_t i = 0; i < size_; i++)
	{
		arrayPtr_[i] = 0;
	}
}


CircularBuffer::~CircularBuffer()
{
	// Free the allocated memory
	delete[] arrayPtr_;
}

CircularBuffer & CircularBuffer::insert(int number)
{
	arrayPtr_[newestIndex_] = number;
	newestIndex_++;
	if (newestIndex_ == size_) {
		newestIndex_ = 0;
	}
	return *this;
}

double CircularBuffer::meanValue() const
{
	double mTemp = 0;
	for (size_t i = 0; i < size_; i++)
	{
		mTemp += arrayPtr_[i];
	}

	return mTemp / size_;
}

void CircularBuffer::print() const
{
	int startIndex = (newestIndex_ == 0 ? (size_ - 1) : (newestIndex_ - 1));

	for (int i = startIndex; i >= 0; i--)
	{
		cout << arrayPtr_[i] << " ";
	}

	for (int i = size_ - 1; i > startIndex; i--)
	{
		cout << arrayPtr_[i] << " ";
	}

	cout << endl << endl;
}
