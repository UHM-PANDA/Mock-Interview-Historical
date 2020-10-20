#ifndef WEAVELIST
#define WEAVELIST

class Node{
    public:
        int val;
        Node* next;
        Node():val(0),next(NULL) { }
};

void weave_list_fake(Node* head1, Node* head2);

#endif