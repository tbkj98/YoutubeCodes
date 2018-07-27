#include "Node.h"
#include <iostream>

class LinkedList {
public:
    Node* head;
    Node* toe;

    LinkedList(int value) {
        this->head = new Node(value);
        this->toe = this->head;
    }

    void addNodes(int value) {
        this->toe->next = new Node(value);
        this->toe = this->toe->next;
    }

    void print() {
        Node* current = head;

        while(current != nullptr) {
            std::cout << current->value << std::endl;
            current = current->next;
        }
    }
};