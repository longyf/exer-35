#include <iostream>
#include "RandomListNode.h"
#include "Clone.h"
using namespace std;

int main() {
	RandomListNode *p1 = new RandomListNode(1);
	RandomListNode *p2 = new RandomListNode(2);
	RandomListNode *p3 = new RandomListNode(3);

	p1->next = p2;
	p2->next = p3;

	p1->random = p3;

	RandomListNode *p4 = Clone(p1);
	cout<<p4->label<<endl;
	cout<<p4->next->label<<endl;
	cout<<p4->next->next->label<<endl;
	cout<<p4->random->label<<endl;
	return 0;
}
