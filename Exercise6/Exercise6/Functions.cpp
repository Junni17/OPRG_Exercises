/*
Funktioner til opgave 6.1 og 6.2
*/

#include <iostream>

// Opgave 6.1
template <typename myType>
bool isEqual(const myType &a,const myType &b)
{
	return a == b;
}

// Opgave 6.2
template <typename myType>
void print(const myType &a,const myType &b)
{
	if (isEqual(a, b))
		std::cout << a << " og " << b << " er ens" << std::endl;
	else
		std::cout << a << " og " << b << " er ikke ens" << std::endl;
}