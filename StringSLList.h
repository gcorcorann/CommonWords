/* 
 * StringSLList.h
 *
 * Created on: Sunday September 2nd 2019
 * Author: Patrick Corcoran
 *
 */
#ifndef STRINGSLLIST_H_
#define STRINGSSLIST_H_
#include <iostream>
#include "StringSLListNode.h"


class StringSLList {
    private:
        // head of the single linked-list is a node
        StringSLListNode* pHead;
    public:
        // constructor
        StringSLList() {
            pHead = nullptr;
            std::cout << "String Linked List Created." << std::endl;
        }
        virtual ~StringSLList() {
            delete pHead;
        }
        void addToHead(string);
        void printAll() const;
        // sorts list in alphabetical order
        void bubbleSort();
};

#endif /* STRINGSSLIST_H_ */
