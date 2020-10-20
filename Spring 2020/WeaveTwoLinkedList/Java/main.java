public class WeaveTwoLinkedList {
    public static void main(String []args) {
       System.out.println("Hello World");
    }

    public static void weaveLinkedList(Node head1, Node head2) {
        Node pointer1 = head1, pointer2 = head2;
        while (pointer1 != null && pointer2 != null) {
            pointer1 = pointer;
        }
    }

    public class Node {
        public int value;
        public Node next;
    
        public Node(int value, Node next) {
            this.value = value;
            this.next = next;
        }
    }
}

