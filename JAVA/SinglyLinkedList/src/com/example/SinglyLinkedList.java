package com.example;

public class SinglyLinkedList {
    Node head;
    Node toe;
    int size;

    SinglyLinkedList(int value) {
        this.head = new Node(value);
        this.toe = this.head;
        this.size = 1;
    }

    void addNodes(int value) {
        this.toe.next = new Node(value);
        this.toe = this.toe.next;
        this.size++;
    }

    /**
     * @param position: this is the position of the node you want to delete.
     *                It starts from '0' and goes all the way to the 'length - 1'
     * */
    void deleteNode(int position) {
        if (position < 0 || position > size - 1) {
            System.out.println("Invalid Position");
            System.out.println("Node cannot be delete");
        } else if (position == 0) {
            Node prev = this.head;
            this.head = this.head.next;
            this.size--;
        } else {
            Node prev = this.head;
            for (int i = 1; i <= position - 1; i++) {
                prev = prev.next;
            }

            Node toBeDeleted = prev.next;
            prev.next = toBeDeleted.next;

            this.size--;
        }
    }

    void print() {
        Node current = head;
        while(current != null) {
            System.out.println(current.value);
            current = current.next;
        }
    }
}
