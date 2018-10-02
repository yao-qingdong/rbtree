//
// Created by minions on 18-9-15.
//

#ifndef TREE_H
#define TREE_H

struct node {
    int value;
    node *left_child, *right_child;
};

class tree {
public:
    tree();

    ~tree();

    node *get_root();

    void add_node(node *n);

    void traversal_dlr(node *n);

private:
    node *root;
};

#endif //TREE_H
