/*
 * StringSLListNode.h
 *
 * Created on: Sunday September 2nd, 2019
 * Author: Patrick Corcoran
 */
#ifndef STRINGSLLISTNODE_H_
#define STRINGSLLISTNODE_H_

#include <string>
using namespace std


class StringSLListNode {
    public:
        // hold string data
        string data;
        // class pointer to point to next element in linked list
        StringSLListNode* pNext;
        // constructor
        StringSLListNode(string el, StringSLListNode* ptr = nullptr) {
            data = el;
            pNext = ptr;
        }
    // destructor
    virtual ~StringSLListNode()
    {
        delete pNext;
    }
};

#endif /* STRINGSLLISTNODE_H_ */
