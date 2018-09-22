#include <iostream>
#include "../tree/tree.h"

int main() {
    tree tree;
    node node1{};

    node1.value = 100;
    tree.add_node(&node1);
    node *root = tree.get_root();

    tree.traversal(root);

    return 0;
}