//
// Created by minions on 18-9-15.
//

#ifndef RBTREE_TREE_H
#define RBTREE_TREE_H

#include <iostream>

struct Node {
    int value;
    struct Node *left_child, *right_child, *father;
};

class Tree {
public:
    Tree();

    ~Tree();

    Node *get_root();

    void set_root(Node *r);

    void AddNode(Node *n);

    void Traversal(Node *node);

private:
    Node *root;
};

Tree::Tree() {
    root = nullptr;
}

Tree::~Tree() = default;

Node *Tree::get_root() {
    if (nullptr == root) {
        return nullptr;
    }
    return root;
}

void Tree::set_root(Node *r) {
    root = r;
}

void Tree::AddNode(Node *n) {
    if (nullptr == root) {
        root = n;
        root->father = nullptr;
        root->left_child = nullptr;
        root->right_child = nullptr;
        return;
    }

    int value = n->value;
    Node *parent = nullptr;
    Node *pointer = root;
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
    } while (nullptr != pointer);

    n->father = parent;
    if (value < parent->value) {
        parent->left_child = n;
    } else {
        parent->right_child = n;
    }
    // rotate
}

void Tree::Traversal(Node *node) {
    if (nullptr == node) {
        return;
    }

    std::cout << node->value << std::endl;
    Traversal(node->left_child);
    Traversal(node->right_child);
}

#endif //RBTREE_TREE_H
