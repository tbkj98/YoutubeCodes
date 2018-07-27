package com.example;

public class Main {

    public static void main(String[] args) {
        SinglyLinkedList list = new SinglyLinkedList(10);
        list.addNodes(20);
        list.addNodes(24);

        list.deleteNode(2);

        list.print();
    }
}
