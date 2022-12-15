/** listAsLinkedList.h
 * ===========================================================
 * Name: 
 * Section: n/a
 * Project: Lesson12 - Implementation of Linked List Library
 * Purpose: List ADT as linked list
 * ===========================================================
 */

#ifndef LISTASLINKEDLIST_H
#define LISTASLINKEDLIST_H
#include <stdbool.h>

// define node type enum
typedef enum { REAL_NUMBER, MATH_OPERATOR } DataType;

// define a node of the linked list
typedef struct Node_struct {
    void* data;                // void* to support either a char* or double*
    DataType type;             // enum, defines data type
    struct Node_struct* next;  // next node or NULL
} Node;

// Define the type (meta-data) that manages the linked list of nodes
typedef struct LinkedList_struct {
    Node* head;
    Node* tail;
    int numberOfItems;
} LinkedList;

// Functions that manipulate a linked list

/** linkedListInit()
 * @brief  - initializes the linked list structure
 * @return - pointer to linked list
 * @pre    - nothing
 * @post   - new empty linked list returned
 */
LinkedList* linkedListInit();

/** deleteLinkedList(()
 * @brief  - deletes linked list, freeing all memory used
 * @param list - a ptr to the linked list structure
 * @pre    - unmodified linked list
 * @post   - the linked list is erased, all nodes freed
 */
void deleteLinkedList(LinkedList* list);

/** appendElementLinkedList()
 * @brief - addes a new node to the end of the linked list
 * @param list - a ptr to the linked list structure
 * @param newNode - a ptr to a Node to append to the list
 * @pre   - 1. A new Node created dynamically is passed with values
 *               type and data already set
 *          2. linked list before node added
 * @post  - modified linked list; new node added; numberOfItems increased
 */
void appendElementLinkedList(LinkedList* list, Node* newNode);

/** lengthOfLinkedList()
 * @brief  - returns the size of the linked list
 * @param list - a ptr to the linked structure
 * @return - number of items in the linked list
 * @pre    - linked list unmodified
 * @post   - linked list unmodified; size of linked list returned
 */
int lengthOfLinkedList(LinkedList* list);

/** printLinkedList()
 * @brief  - outputs the linked list to the console
 * @param list - the linked list structure
 * @pre    - linked list unmodified
 * @post   - linked list unmodified; linked list items printed
 */
void printLinkedList(LinkedList* list);

/** getElementLinkedList()
 * @brief  - retrieves node at a given position
 * @param  list - a ptr to the linked list structure
 * @param  position - index of value requested
 * @return - ptr to Node at 'position', NULL on failure
 * @pre    - unmodified linked list
 * @post   - unmodified linked list; pointer to Node at 'position' returned
 */
Node* getElementLinkedList(LinkedList* list, int position);

/** deleteElementLinkedList()
 * @brief  - deletes node at a given position
 * @param  list - a ptr to the linked list structure
 * @param  position - index of value to delete
 * @pre    - unmodified linked list
 * @post   - 1. modified linked list; node at 'position' removed;
 *              node data and node being removed are freed
 *           2. Print error message, and do nothing else if out of bounds
 */
void deleteElementLinkedList(LinkedList* list, int position);

/** insertElementLinkedList()
 * @brief  - adds node at a given position
 * @param  list - a ptr to the linked list structure
 * @param  position - index of node to add
 * @param  newNode - ptr to Node to be added
 * @pre   - 1. A new Node created dynamically is passed with values
 *               type and data already set
 *          2. linked list before node added
 * @post   - 1. modified linked list; node with pointer to node added at 'position'
 *           2. Print error message, and do nothing else if out of bounds
 */
void insertElementLinkedList(LinkedList* list, int position, Node* newNode);

/** changeElementLinkedList()
 * @brief  - changes node at a given position
 * @param  list - a ptr to the linked list structure
 * @param  position - index of node to replace
 * @param  newNode - replacment Node
 * @pre    - unmodified linked list
 * @post   - modified linked list; node changed at 'position';
 *              previous node freed
 */
void changeElementLinkedList(LinkedList* list, int position, Node* newNode);

/** copyElement()
 * @brief  - helper function, returns a copy of a node
 * @param  nodeToClone - a ptr to the Node to be copied
 * @pre    - unmodified Node
 * @post   - unmodified Node; memmory is allocted for a
 *              new Node with the same data value and type
 *              as nodeToClone; next is set to NULL
 */
Node* copyElement(Node* nodeToClone);

#endif  // LISTASLINKEDLIST_H
