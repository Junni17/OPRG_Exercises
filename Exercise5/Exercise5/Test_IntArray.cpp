// Projekt		eksempler 2. semester
//
// Fil			eksempel 3_3.cpp
//
// Beskrivelse	eksempel på dynamisk lagerallokering
//				test-program til klassen IntArray
//
// Forfatter	NVJ
//
// Version		1.0 - 120905 - oprindelig version

#include "IntArray.h"



int main()
{
	IntArray testObj(5);

	cout << "=====================================================" << endl;
	cout << "Test af constructor med 5 indsat som parameter. Print: " << endl;
	cout << "=====================================================" << endl << endl;

	testObj.print();

	cout << endl << endl;
	cout << "=====================================================" << endl;
	cout << "Test af indsatTal. Tallet 34 bliver indsat paa plads 3. Print: " << endl;
	cout << "=====================================================" << endl << endl;

	testObj.indsaetTal(34, 3);
	testObj.print();

	cout << endl << endl;
	cout << "=====================================================" << endl;
	cout << "Test af setArraySize. Stoerrelsen bliver sat til 15. Print: " << endl;
	cout << "=====================================================" << endl << endl;

	testObj.setArraySize(15);
	testObj.print();

	cout << endl << endl;
	cout << "=====================================================" << endl;
	cout << "Test af setArraySize. Stoerrelsen bliver sat til -5. Print: " << endl;
	cout << "=====================================================" << endl << endl;

	testObj.setArraySize(-5);
	testObj.print();

	cout << endl << endl;
	cout << "=====================================================" << endl;
	cout << "Test af setArraySize. Stoerrelsen bliver sat til 15. Print: " << endl;
	cout << "=====================================================" << endl << endl;

	testObj.setArraySize(15);
	testObj.print();

	cout << endl << endl;

	return 0;
}