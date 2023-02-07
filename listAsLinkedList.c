/** listAsLinkedList.c
 * ===========================================================
 * Name: 
 * Section:
 * Project: PEX 3 - RPN Calculator
 * Purpose: List ADT as linked list
 * ===========================================================
 */

#include "listAsLinkedList.h"

#include <stdio.h>
#include <stdlib.h>

/** linkedListInit()
 * @brief  - initializes the linked list structure
 * @return - pointer to linked list
 */
LinkedList* linkedListInit() {
    return NULL;
}

/** deleteLinkedList(()
 * @brief  - deletes linked list and nodes, freeing all memory used
 * @param list - a ptr to the linked list structure
 */
void deleteLinkedList(LinkedList* list) {
}

/** appendElementLinkedList()
 * @brief - addes a new node to the end of the linked list
 * @param list - a ptr to the linked list structure
 * @param newNode - a ptr to a Node to append to the list
 */
void appendElementLinkedList(LinkedList* list, Node* newNode) {
}

/** lengthOfLinkedList()
 * @brief  - returns the size of the linked list
 * @param list - a ptr to the linked structure
 * @return - number of items in the linked list
 */
int lengthOfLinkedList(LinkedList* list) {
    return 0;
}

/** printLinkedList()
 * @brief  - outputs the linked list to the console
 * @param list - the linked list structure
 */
void printLinkedList(LinkedList* list) {
}

/** getElementLinkedList()
 * @brief  - Retrieves node at a given position
 * @param  list - a ptr to the linked list structure
 * @param  position - index of value requested
 * @return - ptr to Node at 'position', NULL if given an invalid position
 */
Node* getElementLinkedList(LinkedList* list, int position) {
    return NULL;
}

/** deleteElementLinkedList()
 * @brief  - Deletes (i.e., frees) node at a given position.  Function will print an error message
 *           if given an invalid position.
 * @param  list - a ptr to the linked list structure
 * @param  position - index of value to delete
 */
void deleteElementLinkedList(LinkedList* list, int position) {
}

/** insertElementLinkedList()
 * @brief  - Inserts a node at a given position.  Function should print an error message
 *           if given an invalid position.
 * @param  list - a ptr to the linked list structure
 * @param  position - index of node to add
 * @param  newNode - ptr to Node to be added
 */
void insertElementLinkedList(LinkedList* list, int position, Node* newNode) {
}

/** changeElementLinkedList()
 * @brief  - Replaces the node at a given position.  Function will print an error message
 *           if given an invalid position.
 * @param  list - a ptr to the linked list structure
 * @param  position - index of node to replace
 * @param  newNode - replacment Node
 */
void changeElementLinkedList(LinkedList* list, int position, Node* newNode) {
}

/** copyElement()
 * @brief  - helper function, returns a copy of a node
 * @param  nodeToClone - a ptr to the Node to be copied
 * @returns another Node with the exact same data and type; pointer set to NULL
 */
Node* copyElement(Node* nodeToClone) {
    return NULL;
}
