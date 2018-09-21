#include <iostream>
#include "../include/tree.h"

int main() {
    tree tree;
    Node node1{};

    node1.value = 100;
    tree.add_node(&node1);
    Node *root = tree.get_root();

    tree.traversal(root);

    return 0;
}