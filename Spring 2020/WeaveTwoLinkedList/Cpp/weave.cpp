#include<vector>

#include "weave.hpp"

void weave_list_fake(Node* head1, Node* head2){
    std::vector<Node*> v1;
    std::vector<Node*> v2;

    Node* runner = head1;

    while(runner != NULL){
        v1.push_back(runner);
        runner = runner->next;
    }

    runner = head2;
    while(runner != NULL){
        v2.push_back(runner); 
        runner = runner->next;
    }

    int smaller = -1;
    if(v1.size() > v2.size()){
        smaller = 2;
    }
    else if(v1.size() < v2.size()){
        smaller = 1;
    }
    else{
        smaller = 0;
    }
    for(int i = 0; i < ((smaller == 1) ? v1.size()-1 : v2.size()-1); i++){
        v1[i]->next = v2[i];
        v2[i]->next = v1[i+1]->next;
    }

    if(smaller == 0){
        v1[v1.size()-1]->next = v2[v1.size()-1];
    }
    else if(smaller == 1){
        v1[v1.size()-1]->next = v2[v1.size()-1];
    }
    else if(smaller == 2){
        v1[v2.size()-1]->next = v2[v2.size()-1];
        v2[v2.size()-1]->next = v1[v2.size()];
    }

}