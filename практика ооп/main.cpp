#include"Kindergarden.h"
#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	Child X("������", 2015, Child::Gender::MALE);
	Child Y("��������", 2018, Child::Gender::FEMALE);
	Child Z("��������", 2016, Child::Gender::MALE);
	Child A("������", 2015, Child::Gender::FEMALE);
	Child B("�����", 2017, Child::Gender::MALE);
	Kindergarden k(3, "�������", 3);
	Group* groups = k.getGroup();
	groups[0].setNumber(1);
	groups[0].setFIO("������");
	groups[1].setNumber(3);
	groups[1].setFIO("������");
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