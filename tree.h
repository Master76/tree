#include <cstring>
#define MAX_CHILD_NODE 8

struct treeNode
{
  int id;
  int childCount;
  treeNode* parent;
  treeNode* children[MAX_CHILD_NODE];

  treeNode()
    : id(-1)
    , childCount(0)
    , parent(NULL)
    , children{ NULL }
  {}
};

typedef int nodeInfo[2];
#define PID_INDEX 0
#define ID_INDEX 1

treeNode* buildTree(nodeInfo* infos, int count);
void printTree(treeNode* root);
