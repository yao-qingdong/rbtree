#ifndef _NOHE_H_
#define _NODE_H_

/** rbtree */
template <typename T>
class Tree {
 public:
	tree();
	~tree();

	Node<T>* root();
	void set_root(Node<T>* r);
	void add_node(Node<T>* n);
	//void 
	void traversal(Node<T>* r);

 private:
	Node<T>* root;
};

template <typename T>
Tree<T>::tree() {
	root = NULL;// (node<T> *)malloc(sizeof(struct node<T>))
}

template <typename T>
Tree<T>::~tree() {
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
void Tree<T>::add_node(Node<T> *n) {
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
		} else if (value > pointer->value) {
			pointer = pointer->right_child;
		} else {
			// existed
			return;
		}
	} while (NULL != pointer);
	
	n->father = parent;
	if (value < parent->value) {
		parent->left_child = n;
	} else {
		parent->right_child = n;
	}
	// totate
}

template <typename T>
void Tree<T>::traversal(Node<T> *n) {
	if (NULL != n) {
		cout << n->value << endl;
		traversal(n->left_child);
		traversal(n->right_child);
	}
}

#endif
