#include <vector>
#include <queue>
#include <map>

#include "Nodes.hpp"

class BNode {
    private:
        int value;
        BNode* left;
        BNode* right;
    public:
        BNode():value(0),left(NULL),right(NULL) { };
        BNode(int value_,BNode* left_, BNode* right_): value(value_),left(left_), right(right_) { };

        int get_value() { return this->value; };
        BNode* get_left() { return this->left; };
        BNode* get_right() { return this->right; };

        void set_value(int value_ ) { this->value = value_; };
        void set_left(BNode* left_) { this->left = left_; };
        void set_right(BNode* right_) { this->right = right_; };
};

std::vector<std::vector<int>> Binary_Tree_Levels(BNode* root) {
    std::vector<std::vector<int>> ans;
    std::queue<BNode*> traverse;

    BNode* temp;

    traverse.push(root);
    temp = traverse.front();

    while(temp != NULL && !traverse.empty()){
        traverse.pop();
        traverse.push(temp->get_left());
        traverse.push(temp->get_right());
        temp = traverse.front();
    }

    return ans;
}

std::vector<std::vector<int>> Binary_Tree_Levels_Hash(BNode* root){
    std::map<int,std::vector<BNode*>> levels;
    std::vector<std::vector<int>> ans;
    std::vector<BNode*> temp;

    int current_level = 0;

    bool finished = 0;

    if(root == NULL){
        return ans;
    }
    
    temp.push_back(root);

    levels.insert(std::pair<int,std::vector<BNode*>>(current_level,temp));
    
    auto it = levels.begin();
    while(!finished){
        for(int i = 0; i < it->second.size(); i++){
            if((it->second)[i]->get_left() != NULL){
                // check if there is another level
                if(levels.find(current_level+1) != levels.end()){
                    std::vector<BNode*> temp2 = {(it->second)[i]->get_left()};
                    levels.insert(std::pair<int,std::vector<BNode*>>(current_level+1,temp2));
                }
                else{
                    ((levels.find(current_level+1))->second).push_back((it->second)[i]->get_left());
                }
            }

            if((it->second)[i]->get_right() != NULL){
                // check if there is another level
                if(levels.find(current_level+1) != levels.end()){
                    std::vector<BNode*> temp2 = {(it->second)[i]->get_right()};
                    levels.insert(std::pair<int,std::vector<BNode*>>(current_level+1,temp2));
                }
                else{
                    ((levels.find(current_level+1))->second).push_back((it->second)[i]->get_right());
                }
            }
        }

        if(levels.find(current_level+1) == levels.end()){
            finished = 1;
        }
        else{
            it++;
            current_level++;
        }
    }

    for(auto levels_it = levels.begin(); levels_it != levels.end(); levels_it++){
        std::vector<int> temp3;
        for(int i = 0; i < (levels_it->second).size(); i++){
            temp3.push_back((levels_it->second)[i]->get_value());
        }
        ans.push_back(temp3);
    }
    return ans;
}

