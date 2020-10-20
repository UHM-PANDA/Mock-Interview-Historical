#ifndef REMOVEVALUEFROMLINKEDLIST
#define REMOVEVALUEFROMLINKEDLIST

class Node{
    public:
        int val;
        Node* next;
        Node():val(0),next(NULL) { };
		Node(int a):val(a),next(NULL) { };

		void set_next(Node* yup) { this->next = yup; };
};

void remove_from_linked_list_fake(Node* head, int target);
void remove_from_linked_list(Node* head, int target);

void print_list(Node* a);

#endif
