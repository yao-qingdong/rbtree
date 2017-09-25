#ifndef _NODE_TREE_H_
#define _NODE_TREE_H_

#include<iostream>

using namespace std;

enum NodeColor { RED, BLACK };

template <typename T>
struct node {
	NodeColor color;
	T value;
	node<T> *father, *left_child, *right_child;
};

/** rbtree */
template <typename T>
class tree {
public:
	tree();
	~tree();
public:
	node<T>* getroot();
	void setroot(node<T>* r);
	void addNode(node<T>* n);
	//void 
	void traversal(node<T>* r);
private:
	node<T>* root;
};

template <typename T>
tree<T>::tree() {
	root = NULL;// (node<T> *)malloc(sizeof(struct node<T>))
}

template <typename T>
tree<T>::~tree() {
	//free(root);
}

template <typename T>
node<T>* tree<T>::getroot() {
	if (NULL == root) {
		return NULL;
	}
	return root;
}

template <typename T>
void tree<T>::setroot(node<T> *r) {
	root = r;
}

/** add node */
template <typename T>
void tree<T>::addNode(node<T> *n) {
	if (NULL == n) return;
	if (NULL == root) {
		root = n;
		root->father = NULL;
		root->left_child = NULL;
		root->right_child = NULL;
		return;
	}
	int value = n->value;
	node<T>* parent = NULL;
	node<T>* pointer = root;
	do {
		parent = pointer;
		if (value < pointer->value) {
			pointer = pointer->left_child;
		}
		else if (value > pointer->value) {
			pointer = pointer->right_child;
		}
		else {// existed£» 
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

/** DLR */
template <typename T>
void tree<T>::traversal(node<T> *n) {
	if (NULL != n) {
		cout << n->value << endl;
		traversal(n->left_child);
		traversal(n->right_child);
	}
}

#endif
