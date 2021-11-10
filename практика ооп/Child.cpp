#include<string>
#include "Child.h"

using namespace std;

Child::Child() {
	age = 0;
	FIO = "";
	gender = MALE;
}

Child::Child(string s, int a, Gender g) {
	FIO = s;
	age = a;
	gender = g;
}

void Child::setFIO(string s) {
	FIO = s;
}

void Child::setAge(int a) {
	age = a;
}

string Child::getFIO() {
	return FIO;
}

int Child::getAge() {
	return age;
}

Child::Gender Child::getGender() {
	return gender;
}

ostream& operator<<(ostream& out, Child& obj) {
	out << obj.FIO << " " << obj.age << '\n';
	return out;
}

bool Child::operator<(Child& x) {
	return FIO < x.FIO;
}
bool Child::operator>(Child& x) {
	return FIO > x.FIO;
}

bool Child::operator==(Child& x) {
	return FIO == x.FIO && age == x.age && gender == x.gender;
}
bool Child::operator!=(Child& x) {
	return !(*this == x);
}