
/** unitTest.c
 * ===========================================================
 * Name: 
 * Section: 
 * Project: PEX3 - RPN Calculator
 * Purpose: A short example unit test
 * ===========================================================
 */
#include <math.h>
#include "unitTest.h"

void unitTest1() {
    // Create a linked list (not tested in this example)
    LinkedList* list;
    list = linkedListInit();

    //  Here is a quick example of how to test append
    //  to an empty list

    // allocate node to insert and append it to list
    Node* nodePtr = (Node*)malloc(sizeof(Node));
    nodePtr->next = NULL;

    // allocate an nodePtr's data
    nodePtr->data = malloc(sizeof(double));  // data must be allocated
                                             // dynamically (w/malloc())
    *((double*)nodePtr->data) = 7.0;         // set value

    // set the data type using an enumeration (REAL_NUMBER or MATH_OPERATOR, see listAsLinkedList.h)
    nodePtr->type = REAL_NUMBER;

    appendElementLinkedList(list, nodePtr);  // append new node

    // get Node at postion 0
    Node* itemReturned = getElementLinkedList(list, 0);

    // The item return type is correct?
    assert(itemReturned->type == REAL_NUMBER);

    // Does the node contain the item appended?
    assert(*((double*)itemReturned->data) == 7.0);

    // A safer way to do ==
    #define EPSILON 0.0005
    assert(fabs((*(double*)itemReturned->data) - 7.0) <= EPSILON);

    // Are there 1 items in the list?
    assert(list->numberOfItems == 1);

    // Create more tests with asserts to test other aspects of the append
    // and get element
}

void unitTest2() {
    // stub
    return;
}

int runAllTests() {
    unitTest1();
    unitTest2();

    return 0;
}
