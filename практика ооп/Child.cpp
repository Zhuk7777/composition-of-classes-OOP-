#include "Child.h"

Child::Child(string s, int a, Gender g)
{
	FIO = s;
	age = a;
	gender = g;
}

Child::Child()
{
	FIO = "";
	age = 0;
	gender = MALE;
}

void Child::setFIO(string s)
{
	FIO = s;
}

void Child::setAge(int a)
{ 
	age = a;
}

string Child::getFIO()
{
	return FIO;
}

int Child::getAge()
{
	return	age;
}

Child::Gender Child::getGender()
{
	return gender;
}

bool Child::operator<(Child& x)
{
	return FIO<x.FIO;
}

bool Child::operator>(Child& x)
{
	return FIO > x.FIO;
}

bool Child::operator==(Child& x)
{
	return FIO == x.FIO && age == x.age && gender == x.gender;
}

bool Child::operator!=(Child& x)
{
	return !(*this == x);
}

std::ostream& operator<<(std::ostream& out, const Child& obj)
{
	out << obj.FIO << " " << obj.age << '\n';
	return out;
}
