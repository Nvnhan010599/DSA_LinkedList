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

void LinkedList::deleteFirst() {
    const auto temp = head;
    if (length == 1) {
        deleteLast();
    }
    else if (length != 0) {
        head = head->next;
        delete temp;
        length--;
    }
    else {
        /* Do nothing */
    }
}

Node * LinkedList::get(const int index) const {
    Node* returnNode;

    if (0 <= index && index < length) {
        /* Initial return node as head */
        returnNode = head;

        /* Go to index Node */
        for (int i = 1; i <= index; i++) {
            returnNode = returnNode->next;
        }
    }
    else {
        /* Return null pointer */
        returnNode = nullptr;
    }

    return returnNode;
}

bool LinkedList::set(int index, int value) {
    auto NodeOfIndex = get(index);
    if (NodeOfIndex != nullptr) {
        NodeOfIndex->value = value;
        return true;
    }
    else {
        return false;
    }
}

bool LinkedList::insert(int index, int value) {
    auto temp = head;
    Node * newNode = new Node(value);

    if (index < 0 || index > length){
        return false;
    }
    else {
        if (index == 0) {
            prepend(value);
        }
        else if (index == length) {
            append(value);
        }
        else {
            temp = get(index - 1);
            newNode->next = temp->next;
            temp->next = newNode;
        }
        length++;
        return true;
    }
}

void LinkedList::deleteNode(const int index) {

    auto prev = head;
    auto current = head;

    /* Delete for first node */
    if (index == 0) {
        deleteFirst();
    }
    /* Delete for last node */
    else if (index == length - 1) {
        deleteLast();
    }
    /* Delete for valid node */
    else if ( 0 < index && index < length) {
        prev = get(index - 1);
        current = prev->next;
        prev->next = current->next;
        delete current;
        length--;
    }
    /* Do nothing for invalid index */
    else {}
}

void LinkedList::reverse() {
    Node* prevNode = nullptr;
    Node* nextNode = nullptr;
    Node* currentNode = nullptr;

    /* Swap head and tail each others */
    currentNode = head;
    head = tail;
    tail = currentNode;

    /* Start assign reverse */
    currentNode = tail;
    for (int i = 0; i < length; i++) {
        /* Get next node */
        nextNode = currentNode->next;
        /* Link next node of current node to previous node */
        currentNode->next = prevNode;
        /* Assign previous node is current node */
        prevNode = currentNode;
        /* Assign current node is next node. Incase index is last node, currentNode is null */
        currentNode = nextNode;
    }
}

