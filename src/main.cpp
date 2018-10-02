#include <iostream>
#include "../tree/tree.h"

int main() {
    // test data
    node root = {.value = 100, .left_child = nullptr, .right_child = nullptr};
    node node1 = {.value = 36, .left_child = nullptr, .right_child = nullptr};
    node node2 = {.value = 118, .left_child = nullptr, .right_child = nullptr};
    node node3 = {.value = 77, .left_child = nullptr, .right_child = nullptr};
    node node4 = {.value = 628, .left_child = nullptr, .right_child = nullptr};
    node node5 = {.value = 55, .left_child = nullptr, .right_child = nullptr};
    node node6 = {.value = 1402, .left_child = nullptr, .right_child = nullptr};
    node node7 = {.value = 34, .left_child = nullptr, .right_child = nullptr};

    tree rb_tree;
    rb_tree.add_node(&root);
    rb_tree.add_node(&node1);
    rb_tree.add_node(&node2);
    rb_tree.add_node(&node3);
    rb_tree.add_node(&node4);
    rb_tree.add_node(&node5);
    rb_tree.add_node(&node6);
    rb_tree.add_node(&node7);

    rb_tree.traversal_dlr(rb_tree.get_root());

    return 0;
}