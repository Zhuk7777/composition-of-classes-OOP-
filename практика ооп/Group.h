#pragma once
#include"Child.h"
class Group {
	int number, count;
	string FIO;
	struct Node {
		Child data;
		Node* next;
	};
	Node* List;
	void addToHead(Child& x);
	void addAfterNode(Child& x, Node* Pnode);
	Node* findPlaceChild(Child& x);
public:
	Group(int n, string s);
	void setNumber(int n);
	void setFIO(string s);
	int getNumber();
	int getCount();
	string getFIO();
	Node* getList();
	void insert(Child& x);
	void remove(Child& x);
	friend std::ostream& operator<< (std::ostream& out, const Group& obj);
};
