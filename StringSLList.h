/* 
 * StringSLList.h
 *
 * Created on: Sunday September 2nd 2019
 * Author: Patrick Corcoran
 *
 */
#ifndef STRINGSLLIST_H_
#define STRINGSSLIST_H_
#include "StringSLListNode.h"


class StringSLList() {
    private:
        // head of the single linked-list is a node
        StringSLListNode* pHead;
    public:
        // constructor
        StringSLList() {
            pHead = nullptr;
        }
    virtual ~StringSLList() {
        delete pHead;
    }
    // simply check if the head pointer it null
    bool isEmpty() {
        if (pHead == nullptr) {
            return true;
        }
        else return false;
    }
    void addToHead(string);
    void addToTail(string);
    string deleteFromHead();    // delete head, return data
    string deleteFromTail();    // delete tail, return data
    void printAll() const;
    void bubbleSort();          // sorts list in alphabetical order
    bool search(string el);     // seaches for work
};

#endif /* STRINGSSLIST_H_ */
