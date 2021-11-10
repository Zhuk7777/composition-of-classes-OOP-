#pragma once
#include<string>
#include<fstream>

using namespace std;

class Child {
public:
	enum Gender { MALE, FEMALE };
private:
	string FIO;
	unsigned int age;
	Gender gender;
public:
	Child();
	Child(string s, int a, Gender g);
	void setFIO(string s);
	void setAge(int a);
	string getFIO();
	int getAge();
	Gender getGender();
	friend ostream& operator<<(ostream& out, Child& obj);
	bool operator<(Child& x);
	bool operator>(Child& x);
	bool operator==(Child& x);
	bool operator!=(Child& x);
};
