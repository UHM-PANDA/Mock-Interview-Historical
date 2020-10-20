#ifdef BNODES_HPP
#define BNODES_HPP

#include <vector>

class BNode;

std::vector<std::vector<int>> Binary_Tree_Levels(BNode* root);
std::vector<std::vector<int>> Binary_Tree_Levels_Hash(BNode* root);

#endif