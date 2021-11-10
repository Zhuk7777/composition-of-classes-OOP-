#include "Kindergarden.h"

Kindergarden::Kindergarden(int n, string s, int k) : kol(k) {
	number = n;
	director = s;
	group = new Group[kol];
}

Kindergarden::~Kindergarden() {
	delete[] group;
}

void Kindergarden::setNumber(int n) {
	number = n;
}

void Kindergarden::setDirector(string s) {
	director = s;
}

int Kindergarden::getNumber() {
	return number;
}

string Kindergarden::getDirector() {
	return director;
}

Group* Kindergarden::getGroup() {
	return group;
}

int Kindergarden::getKol() {
	return kol;
}

void Kindergarden::addChild(Child& x, int n) {
	int i = 0;
	while (i < kol && group[i].getNumber() != n) {
		i++;
	}
	if (i < kol) {
		group[i].insert(x);
	}
}
void Kindergarden::deleteChild(Child& x) {
	int i = 0;
	while (i < kol && !group[i].findChild(x)) {
		i++;
	}
	if (i < kol) {
		group[i].remove(x);
	}
}

void Kindergarden::transfer(Child& x, int n) {
	deleteChild(x);
	addChild(x, n);
}

ostream& operator<<(ostream& out, Kindergarden& obj) {
	out << obj.number << endl << obj.director << endl;
	for (int i = 0; i < obj.kol; i++)
		out << obj.group[i] << endl;
	return out;
}