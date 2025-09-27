//
// Created by Văn Nhàn Nguyễn on 27/9/25.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"


class LinkedList {
private:
    Node* head = nullptr;
    Node* tail = nullptr;
    int length = 0;

public:
    /* Constructor */
    explicit LinkedList(int value_);

    /* Destructor */
    ~LinkedList();

    /* Print List */
    void printList() const;

    /* Get head */
    [[nodiscard]] Node* getHead() const;

    /* Get tail */
    [[nodiscard]] Node* getTail() const;

    /* Get Length */
    [[nodiscard]] int getLength() const;

    /* Make Empty */
    void makeEmpty();

    /* Append */
    void append(int value_);

    /* Delete last */
    void deleteLast();

    /* Prepend */
    void prepend(int value_);
};



#endif //LINKEDLIST_H
