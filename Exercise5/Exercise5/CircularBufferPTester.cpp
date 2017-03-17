#include "CircularBufferP.h"

int main()
{
	cout << "===================================================" << endl << endl;
	cout << "Test af constructor med accepterede vaerdier samt insert funktion" << endl;
	cout << "Oprettese af objekt CBP1 med size = 5, start = 2: " << endl;
	cout << "Print kaldes 1 gang. Herefter kaldes 'insert' 6 gange i en for-loekke med print efterfulgt. \nDe 6 gange er til for at teste, hvad der sker naar arrayet overskrider sin stoerrelse: " << endl << endl;
	cout << "===================================================" << endl << endl;

	CircularBufferP CBP1(5, 2);
	CBP1.print();
	for (size_t i = 0; i < 6; i++)
	{
		CBP1.insert(i, i + 1).print();
	}

	cout << endl << "===================================================" << endl << endl;
	cout << "Test af constructor med ikke-accepterede-vaerdier samt insert funktion" << endl;
	cout << "Oprettese af objekt CBP2 med size = -3, start = 8: " << endl;
	cout << "Print kaldes en gang. Herefter kaldes 'insert' 1 gang med print efterfulgt: " << endl << endl;
	cout << "===================================================" << endl << endl;

	CircularBufferP CBP2(-3, 8);
	CBP2.print();
	CBP2.insert(3, 5).print();

	cout << endl << "===================================================" << endl << endl;
	cout << "Test af meanValue for objekt CBP1" << endl;
	cout << "Print kaldes på meanValue objektet " << endl << endl;
	cout << "===================================================" << endl << endl;

	Point meanVal = CBP1.meanValue();
	meanVal.print();

}