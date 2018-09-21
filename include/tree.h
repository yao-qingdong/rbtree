//
// Created by minions on 18-9-15.
//

#ifndef RBTREE_TREE_H
#define RBTREE_TREE_H

struct Node {
    int value;
    struct Node *left_child, *right_child, *father;
};

class tree {
public:
    tree();

    ~tree();

    Node *get_root();

//    void set_root(Node *r);

    void add_node(Node *n);

    void traversal(Node *node);

private:
    Node *root;
};

#endif //RBTREE_TREE_H
