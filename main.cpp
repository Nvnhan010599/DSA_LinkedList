#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

static void test_append() {

    // Function to convert nullptr to 0 for comparison
    auto ptrToNum = [](Node* ptr) -> string {
        return (ptr == nullptr) ? "0 (nullptr)" : to_string(ptr->value);
    };

    // Test 1: Append To Non-Empty List
    {
        cout << "\n------ LinkedList Test: Append To Non-Empty List ------\n";

        LinkedList ll(1);
        cout << "Before append: ";
        ll.printList();

        ll.append(2);

        cout << "After append: ";
        ll.printList();

        cout << "Expected Length: 2, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Tail Value: 2, Actual Tail Value: " << ll.getTail()->value << endl;
        cout << "Expected Head Value: 1, Actual Head Value: " << ll.getHead()->value << endl;
    }

    // Test 2: Append To Empty List
    {
        cout << "\n-------- LinkedList Test: Append To Empty List --------\n";

        LinkedList ll(1);
        ll.makeEmpty();  // Make list empty
        cout << "Before append: ";
        ll.printList();

        ll.append(2);

        cout << "After append: ";
        ll.printList();

        cout << "Expected Length: 1, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Tail Value: 2, Actual Tail Value: " << ll.getTail()->value << endl;
        cout << "Expected Head Value: 2, Actual Head Value: " << ll.getHead()->value << endl;
    }

    // Test 3: Multiple Appends
    {
        cout << "\n-------- LinkedList Test: Multiple Appends --------\n";

        LinkedList ll(1);
        cout << "Before append: ";
        ll.printList();

        ll.append(2);
        ll.append(3);

        cout << "After append: ";
        ll.printList();

        cout << "Expected Length: 3, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Tail Value: 3, Actual Tail Value: " << ll.getTail()->value << endl;
        cout << "Expected Head Value: 1, Actual Head Value: " << ll.getHead()->value << endl;
    }

}// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
static void test_deleteLast() {

    // Function to convert nullptr to 0 for comparison
    auto ptrToNum = [](Node* ptr) -> string {
        return (ptr == nullptr) ? "0 (nullptr)" : to_string(ptr->value);
    };

    // Test 1: DeleteLastSingleElementList
    {
        cout << "\n------ LinkedList Test: DeleteLastSingleElementList ------\n";
        LinkedList ll(1);

        cout << "Before deleteLast: ";
        ll.printList();

        ll.deleteLast();

        cout << "After deleteLast: ";
        ll.printList();

        cout << "Expected Length: 0, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Head: 0 (nullptr), Actual Head: " << ptrToNum(ll.getHead()) << endl;
        cout << "Expected Tail: 0 (nullptr), Actual Tail: " << ptrToNum(ll.getTail()) << endl;
    }

    // Test 2: DeleteLastMultipleElementList
    {
        cout << "\n----- LinkedList Test: DeleteLastMultipleElementList -----\n";
        LinkedList ll(1);
        ll.append(2);
        ll.append(3);

        cout << "Before deleteLast: ";
        ll.printList();

        ll.deleteLast();

        cout << "After deleteLast: ";
        ll.printList();

        cout << "Expected Length: 2, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Tail Value: 2, Actual Tail Value: " << ll.getTail()->value << endl;
    }

    // Test 3: DeleteLastEmptyList
    {
        cout << "\n-------- LinkedList Test: DeleteLastEmptyList --------\n";
        LinkedList ll(1);
        ll.makeEmpty();

        cout << "Before deleteLast: ";
        ll.printList();

        ll.deleteLast();

        cout << "After deleteLast: ";
        ll.printList();

        cout << "Expected Length: 0, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Head: 0 (nullptr), Actual Head: " << ptrToNum(ll.getHead()) << endl;
        cout << "Expected Tail: 0 (nullptr), Actual Tail: " << ptrToNum(ll.getTail()) << endl;
    }

    // Test 4: RepeatedDeleteLast
    {
        cout << "\n------- LinkedList Test: RepeatedDeleteLast -------\n";
        LinkedList ll(1);
        ll.append(2);
        ll.append(3);

        cout << "Before deleteLast: ";
        ll.printList();

        ll.deleteLast();
        ll.deleteLast();
        ll.deleteLast();

        cout << "After deleteLast: ";
        ll.printList();

        cout << "Expected Length: 0, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Head: 0 (nullptr), Actual Head: " << ptrToNum(ll.getHead()) << endl;
        cout << "Expected Tail: 0 (nullptr), Actual Tail: " << ptrToNum(ll.getTail()) << endl;
    }

}

static void test_prepend() {

    // Function to convert nullptr to 0 for comparison
    auto ptrToNum = [](Node* ptr) -> string {
        return (ptr == nullptr) ? "0 (nullptr)" : to_string(ptr->value);
    };

    // Test 1: PrependToNonEmptyList
    {
        cout << "\n----------- LinkedList Test: PrependToNonEmptyList -----------\n";

        LinkedList ll(1);
        cout << "Before prepend: ";
        ll.printList();

        ll.prepend(0);

        cout << "After prepend: ";
        ll.printList();

        cout << "Expected Length: 2, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Head Value: 0, Actual Head Value: " << ll.getHead()->value << endl;
        cout << "Expected Tail Value: 1, Actual Tail Value: " << ll.getTail()->value << endl;
    }

    // Test 2: PrependToEmptyList
    {
        cout << "\n------------ LinkedList Test: PrependToEmptyList ------------\n";

        LinkedList ll(1);
        ll.makeEmpty();  // Making list empty
        cout << "Before prepend: ";
        ll.printList();

        ll.prepend(0);

        cout << "After prepend: ";
        ll.printList();

        cout << "Expected Length: 1, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Head Value: 0, Actual Head Value: " << ll.getHead()->value << endl;
        cout << "Expected Tail Value: 0, Actual Tail Value: " << ll.getTail()->value << endl;
    }

    // Test 3: MultiplePrepend
    {
        cout << "\n------------- LinkedList Test: MultiplePrepend -------------\n";

        LinkedList ll(3);
        cout << "Before prepend: ";
        ll.printList();

        ll.prepend(2);
        ll.prepend(1);

        cout << "After prepend: ";
        ll.printList();

        cout << "Expected Length: 3, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Head Value: 1, Actual Head Value: " << ll.getHead()->value << endl;
        cout << "Expected Tail Value: 3, Actual Tail Value: " << ll.getTail()->value << endl;
    }

}

static void test_deleteFirst() {

    // Function to convert nullptr to 0 for comparison
    auto ptrToNum = [](Node* ptr) -> string {
        return (ptr == nullptr) ? "0 (nullptr)" : to_string(ptr->value);
    };

    // Test 1: DeleteFirstFromNonEmptyList
    {
        cout << "\n------- LinkedList Test: DeleteFirstFromNonEmptyList -------\n";
        LinkedList ll(1);
        ll.append(2);

        cout << "Before deleteFirst: ";
        ll.printList();

        ll.deleteFirst();

        cout << "After deleteFirst: ";
        ll.printList();

        cout << "Expected Length: 1, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Head Value: 2, Actual Head Value: " << ll.getHead()->value << endl;
        cout << "Expected Tail Next: 0 (nullptr), Actual Tail Next: " << ptrToNum(ll.getTail()->next) << endl;
    }

    // Test 2: DeleteFirstFromSingleItemList
    {
        cout << "\n------- LinkedList Test: DeleteFirstFromSingleItemList -------\n";
        LinkedList ll(1);

        cout << "Before deleteFirst: ";
        ll.printList();

        ll.deleteFirst();

        cout << "After deleteFirst: ";
        ll.printList();

        cout << "Expected Length: 0, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Head: 0 (nullptr), Actual Head: " << ptrToNum(ll.getHead()) << endl;
        cout << "Expected Tail: 0 (nullptr), Actual Tail: " << ptrToNum(ll.getTail()) << endl;
    }

    // Test 3: DeleteFirstFromEmptyList
    {
        cout << "\n-------- LinkedList Test: DeleteFirstFromEmptyList --------\n";
        LinkedList ll(1);
        ll.makeEmpty();

        cout << "Before deleteFirst: ";
        ll.printList();

        ll.deleteFirst();

        cout << "After deleteFirst: ";
        ll.printList();

        cout << "Expected Length: 0, Actual Length: " << ll.getLength() << endl;
        cout << "Expected Head: 0 (nullptr), Actual Head: " << ptrToNum(ll.getHead()) << endl;
        cout << "Expected Tail: 0 (nullptr), Actual Tail: " << ptrToNum(ll.getTail()) << endl;
    }

}

static void test_Get() {

    // Function to convert nullptr to 0 for comparison
    auto ptrToNum = [](Node* ptr) -> string {
        return (ptr == nullptr) ? "0 (nullptr)" : to_string(ptr->value);
    };

    // Test 1: GetFromNonEmptyList
    {
        cout << "\n--------- LinkedList Test: GetFromNonEmptyList ---------\n";
        LinkedList ll(1);
        ll.append(2);
        ll.append(3);

        cout << "Current List: ";
        ll.printList();

        int index = 1;
        cout << "Get node at index: " << index << endl;

        Node* result = ll.get(index);

        cout << "Value of returned node: " << result->value << endl;
    }

    // Test 2: GetFromSingleItemList
    {
        cout << "\n--------- LinkedList Test: GetFromSingleItemList ---------\n";
        LinkedList ll(1);

        cout << "Current List: ";
        ll.printList();

        int index = 0;
        cout << "Get node at index: " << index << endl;

        Node* result = ll.get(index);

        cout << "Value of returned node: " << result->value << endl;
    }

    // Test 3: GetFromEmptyList
    {
        cout << "\n--------- LinkedList Test: GetFromEmptyList ---------\n";
        LinkedList ll(1);
        ll.makeEmpty();

        cout << "Current List: ";
        ll.printList();

        int index = 0;
        cout << "Get node at index: " << index << endl;

        Node* result = ll.get(index);

        cout << "Value of returned node: " << ptrToNum(result) << endl;
    }

    // Test 4: GetIndexOutOfBounds
    {
        cout << "\n--------- LinkedList Test: GetIndexOutOfBounds ---------\n";
        LinkedList ll(1);
        ll.append(2);
        ll.append(3);

        cout << "Current List: ";
        ll.printList();

        int index = 3;
        cout << "Get node at index: " << index << endl;

        Node* result = ll.get(index);

        cout << "Value of returned node: " << ptrToNum(result) << endl;
    }

}
int main() {

    test_deleteFirst();
    return 0;
}