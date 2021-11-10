#pragma once
#include<string>
#include "Child.h"

class Group {
	int number, count;
	string FIO;
	struct Node {
		Child data;
		Node* next;
	};
	Node* list;

	void addToHead(Child& x);
	void addAfterNode(Child& x, Node* pNode);
	void deleteFromHead();
	void deleteAfterNode(Node* pNode);
	Node* findPlaceChild(Child& x);

public:
	Group();
	Group(int n, string s);
	~Group();
	void setNumber(int n);
	void setFIO(string s);
	int getNumber();
	int getCount();
	string getFIO();
	Node* getList();
	void insert(Child& x);
	void remove(Child& x);
	friend ostream& operator<<(ostream& out, Group& obj);
	void clearGroup();
	bool findChild(Child& x);
};
