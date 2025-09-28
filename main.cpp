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

static void test_Set() {
    // Function to convert nullptr to 0 for comparison
    auto ptrToNum = [](Node* ptr) -> string {
        return (ptr == nullptr) ? "0 (nullptr)" : to_string(ptr->value);
    };

    // Helper function to check test result
    auto checkTestResult = [](bool condition) {
        cout << (condition ? "PASS" : "FAIL") << endl;
    };

    // Test 1: SetElementInNonEmptyList
    {
        cout << "\n------ LinkedList Test: SetElementInNonEmptyList ------\n";

        LinkedList ll(1);
        ll.append(2);
        ll.append(3);

        cout << "Before: ";
        ll.printList();

        bool result = ll.set(1, 4);

        cout << "set(1, 4)\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(result && ll.get(1)->value == 4);
    }

    // Test 2: SetElementInSingleItemList
    {
        cout << "\n------ LinkedList Test: SetElementInSingleItemList ------\n";

        LinkedList ll(1);

        cout << "Before: ";
        ll.printList();

        bool result = ll.set(0, 2);

        cout << "set(0, 2)\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(result && ll.get(0)->value == 2);
    }

    // Test 3: SetElementInEmptyList
    {
        cout << "\n------ LinkedList Test: SetElementInEmptyList ------\n";

        LinkedList ll(1);
        ll.makeEmpty();

        cout << "Before: ";
        ll.printList();

        bool result = ll.set(0, 2);

        cout << "set(0, 2)\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(!result);
    }

    // Test 4: SetIndexOutOfBounds
    {
        cout << "\n------ LinkedList Test: SetIndexOutOfBounds ------\n";

        LinkedList ll(1);
        ll.append(2);
        ll.append(3);

        cout << "Before: ";
        ll.printList();

        bool result = ll.set(3, 4);

        cout << "set(3, 4)\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(!result);
    }

    // Test 5: SetElementAndCheckOtherValues
    {
        cout << "\n------ LinkedList Test: SetElementAndCheckOtherValues ------\n";

        LinkedList ll(1);
        ll.append(2);
        ll.append(3);

        cout << "Before: ";
        ll.printList();

        ll.set(1, 4);

        cout << "set(1, 4)\n";

        cout << "After: ";
        ll.printList();

        bool result = (ll.get(0)->value == 1) && (ll.get(2)->value == 3);
        checkTestResult(result);
    }

}

static void test_Insert() {
    // Function to convert nullptr to 0 for comparison
    auto ptrToNum = [](Node* ptr) -> string {
        return (ptr == nullptr) ? "0 (nullptr)" : to_string(ptr->value);
    };

    // Helper function to check test result
    auto checkTestResult = [](bool condition) {
        cout << (condition ? "PASS" : "FAIL") << endl;
    };

    // Test 1: InsertAtBeginning
    {
        cout << "\n------ LinkedList Test: InsertAtBeginning ------\n";

        LinkedList ll(1);
        ll.append(2);

        cout << "Before: ";
        ll.printList();

        bool result = ll.insert(0, 0);

        cout << "insert( 0, 0 )\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(result && ll.get(0)->value == 0);
    }

    // Test 2: InsertAtEnd
    {
        cout << "\n------ LinkedList Test: InsertAtEnd ------\n";

        LinkedList ll(1);
        ll.append(2);

        cout << "Before: ";
        ll.printList();

        bool result = ll.insert(2, 3);

        cout << "insert( 2, 3 )\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(result && ll.get(2)->value == 3);
    }

    // Test 3: InsertInMiddle
    {
        cout << "\n------ LinkedList Test: InsertInMiddle ------\n";

        LinkedList ll(1);
        ll.append(3);

        cout << "Before: ";
        ll.printList();

        bool result = ll.insert(1, 2);

        cout << "insert( 1, 2 )\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(result && ll.get(1)->value == 2);
    }

    // Test 4: InsertOutOfBounds
    {
        cout << "\n------ LinkedList Test: InsertOutOfBounds ------\n";

        LinkedList ll(1);
        ll.append(2);

        cout << "Before: ";
        ll.printList();

        bool result = ll.insert(3, 3);

        cout << "insert( 3, 3 )\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(!result);
    }

    // Test 5: InsertIntoEmptyList
    {
        cout << "\n------ LinkedList Test: InsertIntoEmptyList ------\n";

        LinkedList ll(1);
        ll.makeEmpty();

        cout << "Before: ";
        ll.printList();

        bool result = ll.insert(0, 1);

        cout << "insert( 0, 1 )\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(result && ll.get(0)->value == 1);
    }

    // Test 6: InsertInvalidIndexNegative
    {
        cout << "\n------ LinkedList Test: InsertInvalidIndexNegative ------\n";

        LinkedList ll(1);

        cout << "Before: ";
        ll.printList();

        bool result = ll.insert(-1, 2);

        cout << "insert( -1, 2 )\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(!result);
    }

}

static void test_deleteNode() {
    // Function to convert nullptr to 0 for comparison
    auto ptrToNum = [](Node* ptr) -> string {
        return (ptr == nullptr) ? "0 (nullptr)" : to_string(ptr->value);
    };

    // Helper function to check test result
    auto checkTestResult = [](bool condition) {
        cout << (condition ? "PASS" : "FAIL") << endl;
    };

    // ... previous tests ...

    // Test 1: DeleteFromBeginning
    {
        cout << "\n------ LinkedList Test: DeleteFromBeginning ------\n";

        LinkedList ll(1);
        ll.append(2);

        cout << "Before: ";
        ll.printList();

        ll.deleteNode(0);

        cout << "deleteNode( 0 )\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(ll.getLength() == 1 && ll.getHead()->value == 2);
    }

    // Test 2: DeleteFromEnd
    {
        cout << "\n------ LinkedList Test: DeleteFromEnd ------\n";

        LinkedList ll(1);
        ll.append(2);

        cout << "Before: ";
        ll.printList();

        ll.deleteNode(1);

        cout << "deleteNode( 1 )\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(ll.getLength() == 1 && ll.getHead()->value == 1);
    }

    // Test 3: DeleteFromMiddle
    {
        cout << "\n------ LinkedList Test: DeleteFromMiddle ------\n";

        LinkedList ll(1);
        ll.append(2);
        ll.append(3);

        cout << "Before: ";
        ll.printList();

        ll.deleteNode(1);

        cout << "deleteNode( 1 )\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(ll.getLength() == 2 && ll.get(1)->value == 3);
    }

    // Test 4: DeleteOutOfBounds
    {
        cout << "\n------ LinkedList Test: DeleteOutOfBounds ------\n";

        LinkedList ll(1);
        ll.append(2);

        cout << "Before: ";
        ll.printList();

        ll.deleteNode(2);

        cout << "deleteNode( 2 )\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(ll.getLength() == 2);
    }

    // Test 5: DeleteFromEmptyList
    {
        cout << "\n------ LinkedList Test: DeleteFromEmptyList ------\n";

        LinkedList ll(1);
        ll.makeEmpty();

        cout << "Before: ";
        ll.printList();

        ll.deleteNode(0);

        cout << "deleteNode( 0 )\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(ll.getLength() == 0);
    }

    // Test 6: DeleteInvalidIndexNegative
    {
        cout << "\n------ LinkedList Test: DeleteInvalidIndexNegative ------\n";

        LinkedList ll(1);

        cout << "Before: ";
        ll.printList();

        ll.deleteNode(-1);

        cout << "deleteNode( -1 )\n";

        cout << "After: ";
        ll.printList();

        checkTestResult(ll.getLength() == 1);
    }

}
static void test_Reverse() {

    // Helper function to check test result
    auto checkTestResult = [](bool condition) {
        cout << (condition ? "PASS" : "FAIL") << endl;
    };

    // Test 1: ReverseMultipleElementList
    {
        cout << "\n------ LinkedList Test: ReverseMultipleElementList ------\n";

        LinkedList ll(1);
        ll.append(2);
        ll.append(3);

        cout << "Before: ";
        ll.printList();

        ll.reverse();

        cout << "After: ";
        ll.printList();

        checkTestResult(ll.getHead()->value == 3 && ll.getTail()->value == 1 && ll.getLength() == 3);
    }

    // Test 2: ReverseSingleElement
    {
        cout << "\n------ LinkedList Test: ReverseSingleElement ------\n";

        LinkedList ll(1);

        cout << "Before: ";
        ll.printList();

        ll.reverse();

        cout << "After: ";
        ll.printList();

        checkTestResult(ll.getHead()->value == 1 && ll.getTail()->value == 1 && ll.getLength() == 1);
    }

    // Test 3: ReverseListWithTwoElements
    {
        cout << "\n------ LinkedList Test: ReverseListWithTwoElements ------\n";

        LinkedList ll(1);
        ll.append(2);

        cout << "Before: ";
        ll.printList();

        ll.reverse();

        cout << "After: ";
        ll.printList();

        checkTestResult(ll.getHead()->value == 2 && ll.getTail()->value == 1 && ll.getLength() == 2);
    }

    // Test 4: ReverseListMultipleTimes
    {
        cout << "\n------ LinkedList Test: ReverseListTwice ------\n";

        LinkedList ll(1);
        ll.append(2);
        ll.append(3);

        cout << "Before: ";
        ll.printList();

        ll.reverse();
        ll.reverse();

        cout << "After: ";
        ll.printList();

        checkTestResult(ll.getHead()->value == 1 && ll.getTail()->value == 3 && ll.getLength() == 3);
    }

    // Test 5: CheckIntegrityAfterReverse
    {
        cout << "\n------ LinkedList Test: CheckIntegrityAfterReverse ------\n";

        LinkedList ll(1);
        ll.append(2);
        ll.append(3);

        cout << "Before: ";
        ll.printList();

        ll.reverse();

        cout << "After: ";
        ll.printList();

        Node* head = ll.getHead();
        bool result = head->value == 3 && head->next->value == 2 && head->next->next->value == 1 && head->next->next->next == nullptr;

        checkTestResult(result);
    }

}
static void test_FindMiddleNode() {
    // Function to convert nullptr to "0 (nullptr)"
    auto ptrToNum = [](Node* ptr) -> string {
        return (ptr == nullptr) ? "0 (nullptr)" : to_string(ptr->value);
    };

    // Helper function to check test result
    auto checkTestResult = [](bool condition) {
        cout << (condition ? "PASS" : "FAIL") << endl;
    };

    // Test: EmptyList
    {
        cout << "\n------ LinkedList Test: EmptyList ------\n";

        LinkedList list(1);
        list.makeEmpty();

        list.printList();

        Node* middle = list.findMiddleNode();

        cout << "Middle node: " << ptrToNum(middle) << endl;

        checkTestResult(middle == nullptr);
    }

    // Test: SingleElement
    {
        cout << "\n------ LinkedList Test: SingleElement ------\n";

        LinkedList list(1);

        list.printList();

        Node* middle = list.findMiddleNode();

        cout << "Middle node: " << ptrToNum(middle) << endl;

        checkTestResult(middle == list.getHead());
    }

    // Test: EvenNumberOfElements
    {
        cout << "\n------ LinkedList Test: EvenNumberOfElements ------\n";

        LinkedList list(1);
        list.append(2);
        list.append(3);
        list.append(4);

        list.printList();

        Node* middle = list.findMiddleNode();

        cout << "Middle node: " << ptrToNum(middle) << endl;

        checkTestResult(middle->value == 3);
    }

    // Test: OddNumberOfElements
    {
        cout << "\n------ LinkedList Test: OddNumberOfElements ------\n";

        LinkedList list(1);
        list.append(2);
        list.append(3);

        list.printList();

        Node* middle = list.findMiddleNode();

        cout << "Middle node: " << ptrToNum(middle) << endl;

        checkTestResult(middle->value == 2);
    }
}
static void test_HasLoop() {
    // Function to convert boolean to string for easy comparison
    auto boolToStr = [](bool val) -> string {
        return val ? "True" : "False";
    };

    // Helper function to check test result
    auto checkTestResult = [](bool condition) {
        cout << (condition ? "PASS" : "FAIL") << endl;
    };

    // Test: EmptyListHasLoop
    {
        cout << "\n------ LinkedList Test: EmptyListHasLoop ------\n";

        LinkedList list(1);
        list.makeEmpty();

        list.printList();

        bool hasLoop = list.hasLoop();

        cout << "Has loop: " << boolToStr(hasLoop) << endl;

        checkTestResult(!hasLoop);
    }

    // Test: SingleElementNoLoop
    {
        cout << "\n------ LinkedList Test: SingleElementNoLoop ------\n";

        LinkedList list(1);

        list.printList();

        bool hasLoop = list.hasLoop();

        cout << "Has loop: " << boolToStr(hasLoop) << endl;

        checkTestResult(!hasLoop);
    }

    // Test: MultipleElementsNoLoop
    {
        cout << "\n------ LinkedList Test: MultipleElementsNoLoop ------\n";

        LinkedList list(1);
        list.append(2);
        list.append(3);
        list.append(4);

        list.printList();

        bool hasLoop = list.hasLoop();

        cout << "Has loop: " << boolToStr(hasLoop) << endl;

        checkTestResult(!hasLoop);
    }

    // Test: SingleElementWithLoop
    {
        cout << "\n------ LinkedList Test: SingleElementWithLoop ------\n";

        LinkedList list(1);
        Node* tail = list.getTail();
        tail->next = list.getHead();

        // Can't print the list because it has a loop!

        bool hasLoop = list.hasLoop();

        cout << "Has loop: " << boolToStr(hasLoop) << endl;

        tail->next = nullptr;  // Break the loop

        checkTestResult(hasLoop);
    }

    // Test: MultipleElementsWithLoop
    {
        cout << "\n------ LinkedList Test: MultipleElementsWithLoop ------\n";

        LinkedList list(1);
        list.append(2);
        list.append(3);
        list.append(4);
        Node* tail = list.getTail();
        tail->next = list.getHead();

        // Can't print the list because it has a loop!

        bool hasLoop = list.hasLoop();

        cout << "Has loop: " << boolToStr(hasLoop) << endl;

        tail->next = nullptr;  // Break the loop

        checkTestResult(hasLoop);
    }

}
int main() {

    test_HasLoop();
    return 0;
}