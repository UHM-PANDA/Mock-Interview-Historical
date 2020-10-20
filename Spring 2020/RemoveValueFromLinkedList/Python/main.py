class Node:
    def __init__(self, value, next):
        self.value = value 
        self.next = next 

def remove_node(head, value):
    pointer, previous = head, None
    while pointer != None and pointer.value != value:
        previous = pointer
        pointer = pointer.next

    if (pointer and previous):
        previous.next = pointer.next

E = Node(5, None)
D = Node(4, E)
C = Node(3, D)
B = Node(2, C)
A = Node(1, B)

pointer = A
while pointer:
    print(pointer.value)
    pointer = pointer.next

print("-----")

remove_node(A, 5)
pointer = A
while pointer:
    print(pointer.value)
    pointer = pointer.next
