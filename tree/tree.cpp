//
// Created by minions on 18-9-15.
//

#include <iostream>

#include "tree.h"

tree::tree() {
    root = nullptr;
}

tree::~tree() = default;

node *tree::get_root() {
    if (nullptr == root) {
        return nullptr;
    }

    return root;
}

void tree::add_node(node *n) {
    if (nullptr == n) {
        return;
    }
    // if n->value is invalid

    if (nullptr == root) {
        root = n;
        root->left_child = nullptr;
        root->right_child = nullptr;
        return;
    }

    node *tree_node = root;

}

void compare() {

}

void tree::traversal(node *n) {
    if (nullptr == n) {
        return;
    }

    std::cout << n->value << std::endl;
    traversal(n->left_child);
    traversal(n->right_child);
}