/*
Opgave 6.3
*/

#include "Functions.cpp"
#include "Person.h"

int main()
{
	int x = 7, y = 7, z = 8;
	char a = 'a', b = 'b', c = 'c';
	double q = 1.32, w = 1.32, e = 41.512;
	Person p1, p2("Jonas", 23), p3;

	std::cout << "==================================" << std::endl;
	std::cout << "Test af funktionerne med integers:" << std::endl;
	std::cout << "==================================" << std::endl << std::endl;
	print(x, y);
	print(x, z);

	std::cout << std::endl << std::endl;
	std::cout << "==================================" << std::endl;
	std::cout << "Test af funktionerne med chars:" << std::endl;
	std::cout << "==================================" << std::endl << std::endl;
	print(a, b);
	print(c, c);

	std::cout << std::endl << std::endl;
	std::cout << "==================================" << std::endl;
	std::cout << "Test af funktionerne med doubles:" << std::endl;
	std::cout << "==================================" << std::endl << std::endl;
	print(q, e);
	print(q, w);

	std::cout << std::endl << std::endl;
	std::cout << "==================================" << std::endl;
	std::cout << "Test af funktionerne med person:" << std::endl;
	std::cout << "==================================" << std::endl << std::endl;
	print(p1, p2);
	print(p1, p3);

	cout << endl;

}