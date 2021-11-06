#include "Group.h"

void Group::addToHead(Child& x)
{
	Node* p = new Node;//×ÀÉËÄ Ñ ÏÓÑÒÛÌÈ ÏÀĞÀÌÅÒĞÀÌÈ ÁÛË ÑÎÇÄÀÍ ÄËß İÒÎÉ ÑÒĞÎÊÈ 
	p->next = List;
	p->data = x;
	List = p;

}

void Group::addAfterNode(Child& x, Node* Pnode)
{
	Node* p = new Node;
	p->data = x;
	p->next = Pnode->next;
	Pnode->next = p;
}

Group::Node* Group::findPlaceChild(Child& x)
{
	Group::Node* p = List;
	while (p->next != nullptr && x < p->next->data)
		p = p->next;
	return p;//ïîñìîòğåòü ïîòîì ó òàíè ıòó ôóíêöèş
}


Group::Group(int n, string s )
{
	number = n;
	count = 0;
	FIO = s;
	List = nullptr;
	
}

void Group::setNumber(int n)
{
	number = n;
}

void Group::setFIO(string s)
{
	FIO = s;
}

int Group::getNumber()
{
	return number;
}

int Group::getCount()
{
	return count;
}

string Group::getFIO()
{
	return FIO;
}

Group::Node* Group::getList()
{
	return List;
}

void Group::insert(Child& x)
{
	if (List == nullptr||x<List->data)
		addToHead(x);
	else {
		Node* p = findPlaceChild(x);
		addAfterNode(x, p);
	}
}

std::ostream& operator<<(std::ostream& out, const Group& obj)
{
	out << obj.number << " " << obj.count << " " << obj.FIO << " ";
	Group::Node* p = obj.List;
	while (p != nullptr) {
		out << p->data;
		p = p->next;
	}
}
