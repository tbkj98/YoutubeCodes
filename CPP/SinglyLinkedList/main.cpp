#include "LinkedList.h"

int main() {
    LinkedList* list = new LinkedList(10);

    list->addNodes(20);
    list->addNodes(30);
    list->addNodes(40);

    list->print();
    return 0;
}