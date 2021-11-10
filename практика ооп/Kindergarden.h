#pragma once
#include "Group.h"
#include<string>



class Kindergarden {
	int number;
	string director;
	Group* group;
	const int kol;

public:
	Kindergarden(int n, string s, int k);
	~Kindergarden();
	void setNumber(int n);
	void setDirector(string s);
	int getNumber();
	string getDirector();
	Group* getGroup();
	int getKol();
	void addChild(Child& x, int n);
	void deleteChild(Child& x);
	void transfer(Child& x, int n);
	friend ostream& operator<<(ostream& out, Kindergarden& obj);
};
