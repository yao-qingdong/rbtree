#include <iostream>
#include "tree.h"

int main() {
  Tree tree;
  Node node1;
  node1.value = 100;
  tree.AddNode(&node1);
  Node* root = tree.get_root();
  tree.Traversal(root);
  return 0;
}
