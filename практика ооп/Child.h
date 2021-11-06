#pragma once
#include<string>
#include<fstream>
using namespace std;
class Child {
public:
	enum Gender { MALE, FAMALE };
	//тут должен быть privet:
	string FIO;
	unsigned int age;
	enum Gender { MALE, FAMALE };
	Gender gender;
public:
	Child(string s, int a, Gender g);
	Child();
	void setFIO(string s);
	void setAge(int a);
	string getFIO();
	int getAge();
	Gender getGender();
	friend std::ostream& operator<< (std::ostream& out, const Child& obj);
	bool operator<(Child& x);
	bool operator>(Child& x);
	bool operator==(Child& x);
	bool operator!=(Child& x);
};
