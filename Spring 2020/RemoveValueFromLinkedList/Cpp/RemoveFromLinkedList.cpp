#include <vector>
#include <iostream>

#include "RemoveFromLinkedList.hpp"

void remove_from_linked_list_fake(Node* head, int target){
    Node* runner = head;

    std::vector<Node*> v;
    while(runner != NULL){
        v.push_back(runner);
        runner = runner->next;
    }

    for(int i = 0; i < v.size(); i++){
        if(v[i]->val == target){
            v.erase(v.begin()+i);
        }
    }
    for(int i = 0; i < v.size()-1; i++){
        v[i]->next = v[i+1];
    }
    v[v.size()-1]->next = NULL;
    head = v[0];
}

void remove_from_linked_list(Node* head, int target){
    if(head == NULL){
        return;
    }
}

void print_list(Node* a){
	Node* temp = a;
	while(temp!= NULL){
		std::cout << "->" << temp->val;
		temp = temp->next;
	}
	std::cout << std::endl;
	return;
}
