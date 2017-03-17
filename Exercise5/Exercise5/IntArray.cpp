// Projekt		eksempler 2. semester
//
// Fil			eksempel 3_3.cpp
//
// Beskrivelse	eksempel på dynamisk lagerallokering
//				implementering af klassen IntArray
//
// Forfatter	NVJ
//
// Version		1.0 - 120905 - oprindelig version

#include "IntArray.h"


IntArray::IntArray(int s)
{
	arraySize_ = (s>0 ? s : 10);

	arrayPtr_ = new int[arraySize_];

	if (arrayPtr_ == nullptr)			// sikrer at programmet afsluttes hvis
	{									// det IKKE lykkes at allokere hukommelsen
		cout << "\nNo memory allocated - program terminate\n\n";
		exit(1);
	}

	for (int i = 0; i<arraySize_; i++)
		arrayPtr_[i] = 0;
}


IntArray::~IntArray()
{
	delete[] arrayPtr_;
}


void IntArray::setArraySize(int s)
{
	if (s <= 0)
	{
		cout << "\nArraysize must be positiv. No changes made.\n";
	}
	else if (s == arraySize_)
	{
		cout << "\nArraysize is already " << s << ". No changes made.\n";
	}
	else if (s<arraySize_)
	{
		cout << "\nDecreasing arraysize to " << s << ". Some data might be lost.\n";
		arraySize_ = s;
	}
	else
	{
		cout << "\nIncreasing arraysize to " << s << ".\n";

		// init TempPtr to point to already allocated memory
		int* tempPtr = arrayPtr_;

		// Allocate the desired memory
		arrayPtr_ = new int[s];

		if (arrayPtr_ == NULL)
		{
			cout << "\n No memory allocated - program terminate\n\n";
			exit(1);
		}

		// Insert old values in the new array:
		for (size_t i = 0; i < s; i++)
		{
			if (i < arraySize_)
				arrayPtr_[i] = tempPtr[i];
			else
				arrayPtr_[i] = 0;
		}

		// Free the no longer needed allocated memory
		delete[] tempPtr;

		arraySize_ = s;
	}
}


int IntArray::getArraySize() const
{
	return arraySize_;
}


void IntArray::indsaetTal(int tal, int plads)
{
	if (plads >= 0 && plads < arraySize_)
	{
		arrayPtr_[plads] = tal;
	}
}


void IntArray::print() const
{
	cout << endl;

	for (int i = 0; i<arraySize_; i++)
		cout << arrayPtr_[i] << " ";

	cout << endl;
}