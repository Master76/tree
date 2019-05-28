#include "tree.h"
#include <iostream>

using namespace std;

#define TEST_INPUT                                              \
  {                                                             \
    { -1, 0 }, { 0, 1 }, { 0, 2 }, { 1, 3 }, { 1, 4 }, { 2, 5 } \
  }

int main(void)
{
  treeNode* root;
  nodeInfo data[] = TEST_INPUT;

  root = buildTree(data, sizeof(data) / sizeof(nodeInfo));
  cout << "print tree: ";
  printTree(root);
  cout << endl;
  return 0;
}
