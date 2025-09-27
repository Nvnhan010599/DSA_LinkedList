//
// Created by Văn Nhàn Nguyễn on 27/9/25.
//

#include "LinkedList.h"

#include <iostream>
#include <__ostream/basic_ostream.h>

LinkedList::LinkedList(const int value_) {
    auto newNode = new Node(value_);
    head = newNode;
    tail = newNode;
    this->length = 1;
}

LinkedList::~LinkedList() {
    Node* temp = head;
    while (head != nullptr) {
        head = head->next;
        delete temp;
        temp = head;
    }
}

void LinkedList::printList() const {
    auto temp = head;
    if (temp != nullptr) {
        while (temp != nullptr) {
            std::cout << temp->value;
            temp = temp->next;
            if (temp != nullptr) {
                std::cout << " -> ";
            }
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "Empty List" << std::endl;
    }
}

Node * LinkedList::getHead() const {
    return head;
}

Node * LinkedList::getTail() const {
    return tail;
}

int LinkedList::getLength() const {
    return this->length;
}

void LinkedList::makeEmpty() {
    auto temp = head;
    while (temp != nullptr) {
        head = head->next;
        delete temp;
        temp = head;
    }
    tail = nullptr;
    length = 0;
}

void LinkedList::append(const int value_) {
    auto newNode = new Node(value_);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
    length++;
}

void LinkedList::deleteLast() {

    auto temp = head;

    if (length == 1) {
        head = nullptr;
        tail = nullptr;
        length = 0;
    }
    else if (length != 0) {
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        tail = temp;
        length--;
    }
    else {
        /* Do nothing */
    }
}

void LinkedList::prepend(int value_) {
    auto newNode = new Node(value_);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    }else {
        newNode->next = head;
        head = newNode;
    }
    length++;
}

