#ifndef RANDOM_LIST_NODE_H
#define RANDOM_LIST_NODE_H
struct RandomListNode {
	int label;
	RandomListNode *next, *random;
	RandomListNode(int x = 0) : label(x), next(nullptr), random(nullptr) {}
};
#endif
