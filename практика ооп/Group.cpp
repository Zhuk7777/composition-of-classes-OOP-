#include "Group.h"

Group::Group() {
	number = 0;
	count = 0;
	FIO = "";
	list = nullptr;
}

void Group::addToHead(Child& x) {
	Node* p = new Node;
	p->next = list;
	p->data = x;
	list = p;
}

Group::~Group() {
	clearGroup();
}

void Group::clearGroup() {
	while (list != nullptr) {
		deleteFromHead();
	}
	delete list;
	list = nullptr;
}

void Group::addAfterNode(Child& x, Node* pNode) {
	Node* p = new Node;
	p->data = x;
	p->next = pNode->next;
	pNode->next = p;
}

Group::Node* Group::findPlaceChild(Child& x) {
	Group::Node* p = list;
	while (p->next != nullptr && x < p->next->data) {
		p = p->next;
	}
	return p;
}

Group::Group(int n, string s) {
	number = n;
	count = 0;
	FIO = s;
	list = nullptr;
}

void Group::setNumber(int n) {
	number = n;
}

void Group::setFIO(string s) {
	FIO = s;
}

int Group::getNumber() {
	return number;
}

int Group::getCount() {
	return count;
}

string Group::getFIO() {
	return FIO;
}

Group::Node* Group::getList() {
	return list;
}

void Group::deleteFromHead() {
	Node* p = list;
	list = list->next;
	p->next = nullptr;
	delete p;
	p = nullptr;
}

void Group::insert(Child& x) {
	if (list == nullptr || x < list->data)
		addToHead(x);
	else {
		Node* p = findPlaceChild(x);
		addAfterNode(x, p);
	}
	count++;
}

void Group::deleteAfterNode(Node* pNode) {
	Node* p = pNode->next;
	pNode->next = p->next;
	p->next = nullptr;
	delete p;
	p = nullptr;
}

void Group::remove(Child& x) {
	if (list->data == x)
		deleteFromHead();
	else {
		Node* p = list;
		while (p->next != nullptr && p->next->data != x)
			p = p->next;
		deleteAfterNode(p);
	}
	count--;
}

ostream& operator<<(ostream& out, Group& obj) {
	out << obj.number << " " << obj.count << " " << obj.FIO << endl;
	Group::Node* p = obj.list;
	while (p != nullptr) {
		out << p->data;
		p = p->next;
	}
	return out;
}

bool Group::findChild(Child& x) {
	Node* p = list;
	while (p != nullptr && p->data != x)
		p = p->next;
	if (p != nullptr)
		return true;
	else
		return false;
}

