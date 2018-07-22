#ifndef _TREE_H_
#define _TREE_H_

#include <iostream>

using namespace std;

struct Node {
	int value;
	struct Node *left_child, *right_child, *father;
};

/** rbtree */
class Tree {
public:
	Tree();
	~Tree();

	Node* get_root();
	void set_root(Node* root);
	void AddNode(Node* node);
	void Traversal(Node* node);

private:
	Node* root;
};

Tree::Tree() {
	root = NULL;// (node *)malloc(sizeof(struct node))
}

Tree::~Tree() {
	//free(root);
}

Node* Tree::get_root() {
	if (NULL == root) {
		return NULL;
	}
	return root;
}

void Tree::set_root(Node *r) {
	root = r;
}

void Tree::AddNode(Node* n) {
	if (NULL == root) {
		root = n;
		root->father = NULL;
		root->left_child = NULL;
		root->right_child = NULL;
		return;
	}

	int value = n->value;
	Node* parent = NULL;
	Node* pointer = root;
	do {
		parent = pointer;
		if (value < pointer->value) {
			pointer = pointer->left_child;
		}
		else if (value > pointer->value) {
			pointer = pointer->right_child;
		}
		else {
			// existed
			return;
		}
	} while (NULL != pointer);

	n->father = parent;
	if (value < parent->value) {
		parent->left_child = n;
	}
	else {
		parent->right_child = n;
	}
	// totate
}

void Tree::Traversal(Node* node) {
	if (NULL == node) {
		return;
	}

	cout << node->value << endl;
	Traversal(node->left_child);
	Traversal(node->right_child);
}

#endif
