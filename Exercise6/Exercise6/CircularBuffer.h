#pragma once
#include <iostream>
using namespace std;

template <typename myType>
class CircularBuffer
{
public:
	CircularBuffer(int size = 10)
	{
		size_ = ((size > 0) ? size : 10);
		newestIndex_ = 0;

		// Allocate memory on the heap
		arrayPtr_ = new myType[size_]();
	}

	~CircularBuffer()
	{
		// Free the allocated memory
		delete[] arrayPtr_;
	}

	CircularBuffer& insert(myType element)
	{
		arrayPtr_[newestIndex_++] = element;
		
		if (newestIndex_ == size_) {
			newestIndex_ = 0;
		}

		return *this;
	}

	myType meanValue() const
	{
		myType* mTemp = new myType();
		for (size_t i = 0; i < size_; i++)
		{
			*mTemp += arrayPtr_[i];
		}

		myType Temp = *mTemp;
		delete mTemp;

		return Temp / size_;
	}

	void print() const
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
private:
	int size_;
	int newestIndex_;
	myType* arrayPtr_;
};

