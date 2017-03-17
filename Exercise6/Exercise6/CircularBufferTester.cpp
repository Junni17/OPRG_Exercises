#include "CircularBuffer.h"

int main()
{
	CircularBuffer<int> myCB(5);
	
	for (size_t i = 0; i < 5; i++)
	{
		myCB.insert(i);
	}

	cout << "Test af parametiseret constructor med size = 5 (myCBa(5))" << endl << endl;
	cout << "myCB indeholder foelgende vaerdier: " << endl;
	myCB.print();

	cout << "Efter tilfoejelse af tallet 6 ser det saadan ud: " << endl;
	myCB.insert(6).print();

	cout << "myCB meanvalue: " << myCB.meanValue() << endl << endl;

	cout << "============================================" << endl << endl;

	cout << "Test af myCB1 constructor med -1 som size myCBa(-1): " << endl << endl;
	cout << "myCBa indeholder foelgende vaerdier: " << endl;
	CircularBuffer<int> myCBa(-1);
	myCBa.print();
	cout << "Efter indsaettelse af tallet 4 ser det saadan ud: " << endl;
	myCBa.insert(4).print();
	
	cout << "myCBa meanValue: " << myCBa.meanValue() << endl << endl;

	cout << "============================================" << endl << endl;

	CircularBuffer<int> myCBb;

	cout << "Test af default constructor:" << endl << endl;
	cout << "myCBb indeholder foelgende vaerdier: " << endl;
	myCBb.print();

}