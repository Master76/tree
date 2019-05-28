#include "tree.h"
#include <iostream>

using namespace std;

#define HASH_CAPACITY 256
#define TRY_GET_VALUE(hashTable, key, target) \
  if ((target = hashTable[key]) == NULL)      \
  hashTable[target->id = key] = target = new treeNode()

treeNode* buildTree(nodeInfo* infos, int count)
{
  treeNode* hashTable[HASH_CAPACITY] = { NULL };
  treeNode* root = NULL;

  for (int i = 0; i < count; i++) {
    int pid = infos[i][PID_INDEX];
    int id = infos[i][ID_INDEX];
    treeNode* pNode;
    treeNode* node;

    TRY_GET_VALUE(hashTable, id, node);
    if (pid != -1) {
      TRY_GET_VALUE(hashTable, pid, pNode);
      node->parent = pNode;
      pNode->children[pNode->childCount++] = node;
    } else {
      root = node;
    }
  }

  return root;
}

void printTree(treeNode* root)
{
  if (root == NULL) return;
  cout << root->id << " ";
  for (int i = 0; i < root->childCount; i++) {
    printTree(root->children[i]);
  }
}
