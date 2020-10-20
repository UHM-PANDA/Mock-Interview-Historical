#include <iostream>

#include "RemoveFromLinkedList.hpp"

int main(int argc, char** argv){
	Node* head = new Node(10);
	head->next = new Node(11);	
	head->next->next = new Node(12);
	head->next->next->next = new Node(13);
	head->next->next->next->next = new Node(14);

	print_list(head);	

	remove_from_linked_list_fake(head,11);

	print_list(head);	

	return 0;
}
