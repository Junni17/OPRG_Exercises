#include "Person.h"


Person::Person( string name, int age )
{
	name_ = name;
	age_ = ( age>0 ? age : 0 );
}


void Person::print() const
{
	cout << name_ << " " << age_ << " \x86r";;
}

bool Person::operator==(const Person &a)
{
	return ((age_ == a.age_) && (name_ == a.name_));
}

ostream & operator<<(ostream &output, const Person &person)
{
	output << person.name_ << " " << person.age_ << " \x86r";
	return output;
}
