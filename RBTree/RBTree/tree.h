#ifndef _TREE_H_
#define _TREE_H_

/** rbtree */
template <typename T>
class Tree {
public:
	Tree();
	~Tree();

	Node<T>* root();
	void set_root(Node<T>* r);
	void AddNode(Node<T>* n);
	void Traversal(Node<T>* r);

private:
	Node<T>* root;
};

template <typename T>
Tree<T>::Tree() {
	root = NULL;// (node<T> *)malloc(sizeof(struct node<T>))
}

template <typename T>
Tree<T>::~Tree() {
	//free(root);
}

template <typename T>
Node<T>* Tree<T>::root() {
	if (NULL == root) {
		return NULL;
	}
	return root;
}

template <typename T>
void Tree<T>::set_root(Node<T> *r) {
	root = r;
}

template <typename T>
void Tree<T>::AddNode(Node<T> *n) {
	if (NULL == n) return;
	if (NULL == root) {
		root = n;
		root->father = NULL;
		root->left_child = NULL;
		root->right_child = NULL;
		return;
	}

	int value = n->value;
	Node<T>* parent = NULL;
	Node<T>* pointer = root;
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

template <typename T>
void Tree<T>::Traversal(Node<T> *n) {
	if (NULL != n) {
		cout << n->value << endl;
		Traversal(n->left_child);
		Traversal(n->right_child);
	}
}

#endif