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

    /* Delete First */
    void deleteFirst();

    /* Get */
    [[nodiscard]] Node* get(int index) const;

    /* Set */
    [[nodiscard]] bool set(int index, int value);

    /* Insert */
    bool insert(int index, int value);

    /* Delete node */
    void deleteNode(int index);

    /* Reverse */
    void reverse();

    /* Find Middle Node without using length */
    Node* findMiddleNode() const;

    /* Check Has Loop */
    bool hasLoop() const;

    /* Find Kth Node From End */
    Node* findKthFromEnd(int k);

    /* Remove duplicate */
    void removeDuplicates();

    /* Binary value node to decimal */
    int binaryToDecimal();

    /* Partition List */
    void partitionList(int x);

    /* Reverse Between */
    void reverseBetween(int m, int n);

    /* Swap Pairs */
    void swapPairs();
};



#endif //LINKEDLIST_H
