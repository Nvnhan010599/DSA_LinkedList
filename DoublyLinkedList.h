//
// Created by Văn Nhàn Nguyễn on 6/10/25.
//

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include "Node.h"


class DoublyLinkedList {
private:
    Node* head = nullptr;
    Node* tail = nullptr;
    int length = 0;

public:
    /* Constructor */
    explicit DoublyLinkedList(int value_);

    /* Get head */
    [[nodiscard]] Node* getHead() const;

    /* Get tail */
    [[nodiscard]] Node* getTail() const;

    /* Get Length */
    [[nodiscard]] int getLength() const;

};

#endif //DOUBLYLINKEDLIST_H
