#include"Kindergarden.h"
#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	Child X("Петров", 2015, Child::Gender::MALE);
	Child Y("Сидорова", 2018, Child::Gender::FEMALE);
	Child Z("Старухин", 2016, Child::Gender::MALE);
	Child A("Петина", 2015, Child::Gender::FEMALE);
	Child B("Жуков", 2017, Child::Gender::MALE);
	Kindergarden k(3, "Авсеева", 3);
	Group* groups = k.getGroup();
	groups[0].setNumber(1);
	groups[0].setFIO("Хохлов");
	groups[1].setNumber(3);
	groups[1].setFIO("Тонких");
	k.addChild(X, 1);
	k.addChild(Y, 1);
	k.addChild(Z, 3);
	k.addChild(A, 3);
	cout << k;
	k.transfer(X, 3);
	cout << k;
	k.deleteChild(X);
	cout << k;
	groups[1].clearGroup();
	cout << k;
	return 0;
}