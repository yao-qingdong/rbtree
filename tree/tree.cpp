//
// Created by minions on 18-9-15.
//

#include <iostream>

#include "tree.h"

tree::tree() {
    root = nullptr;
};

tree::~tree() = default;

node *tree::get_root() {
    return root;
}

void tree::add_node(node *n) {
    if (nullptr == n) {
        return;
    }
    if (nullptr == root) {
        root = n;
        return;
    }

    node *cmp_node = root;
    while (cmp_node != nullptr) {
        if (n->value < cmp_node->value) {
            if (cmp_node->left_child == nullptr) {
                cmp_node->left_child = n;
                break;
            }
            cmp_node = cmp_node->left_child;
        } else if (n->value > cmp_node->value) {
            if (cmp_node->right_child == nullptr) {
                cmp_node->right_child = n;
                break;
            }
            cmp_node = cmp_node->right_child;
        }
    }
}

void tree::traversal_dlr(node *n) {
    if (nullptr == n) {
        return;
    }

    std::cout << n->value << std::endl;
    traversal_dlr(n->left_child);
    traversal_dlr(n->right_child);
}