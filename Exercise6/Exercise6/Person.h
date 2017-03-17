#pragma once

#include <iostream>
#include <string>

using namespace std;


class Person
{
public:
	Person( string = "Ukendt", int = 0 );
	void print() const;
	bool operator==(const Person&);
	friend ostream& operator<< (ostream &, const Person &);
private:
	int age_;
	string name_;
};

