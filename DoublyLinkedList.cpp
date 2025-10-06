//
// Created by Văn Nhàn Nguyễn on 6/10/25.
//

#include "DoublyLinkedList.h"
DoublyLinkedList::DoublyLinkedList(int value_) {
    auto newNode = new Node(value_);
    head = newNode;
    tail = newNode;
    length = 1;
}

Node * DoublyLinkedList::getHead() const {
    return head;
}

Node * DoublyLinkedList::getTail() const {
    return tail;
}

int DoublyLinkedList::getLength() const {
    return length;
}
