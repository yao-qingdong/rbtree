#ifndef _NODE_H_
#define _NODE_H_

struct Node {
	int value;
	Node *left_child, *right_child, *parent;
};

#endif
