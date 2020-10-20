public class Main {
    public static void main(String []args) {
        Node E = new Node(5, null);
        Node D = new Node(4, E);
        Node C = new Node(3, D);
        Node B = new Node(2, C);
        Node A = new Node(1, B);
        Node pointer = A;
        while (pointer != null) {
            System.out.println(pointer.value);
            pointer = pointer.next;
        }
        System.out.println("-----");
        removeNode(A, 5);
        pointer = A;
        while (pointer != null) {
            System.out.println(pointer.value);
            pointer = pointer.next;
        }
    }

    public static void removeNode(Node head, int value) {
        Node previous = null, pointer = head;
        while (pointer != null && pointer.value != value) {
            previous = pointer;
            pointer = pointer.next;
        }

        if (pointer != null && previous != null) previous.next = pointer.next;
        if (previous == null) pointer = null;
    }

    public static class Node {
        public int value;
        public Node next;
    
        public Node(int value, Node next) {
            this.value = value;
            this.next = next;
        }
    }
}

