/*
 * StringSLList.cpp
 *
 * Created on: Monday September 3rd 2019
 * Author: Patrick Corcoran
 *
 */

#include <iostream>
#include "StringSLList.h"

// add new element to list head
void StringSLList::addToHead(string el) {
    pHead = new StringSLListNode(el, pHead);
}

// print all elements in linked in
void StringSLList::printAll() const {
    StringSLListNode* pTemp = pHead;
    std::cout << "Contents of list: ";
    while (pTemp != nullptr) {
        std::cout << pTemp->data << " ";
        pTemp = pTemp->pNext;
    }
    std::cout << std::endl;
    delete pTemp;
}

void StringSLList::bubbleSort() {
    StringSLListNode *pTemp1, *pTemp2, *pTemp3, *pTemp4, *pTemp5;
    pTemp1 = pHead;         // current node
    pTemp2 = pHead->pNext;  // next node
    pTemp3 = pHead;         // previous node
    pTemp4 = nullptr;       // used for finding end of list
}
