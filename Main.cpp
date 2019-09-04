/*
 * Main.cpp
 *
 * Created on: Monday September 3rd 2019
 * Author: Patrick Corcoran
 *
 */
#include <iostream>
#include "StringSLList.h"

int main() {
    // create an array of pointers to 26 linked lists (one for each letter in alphabet)
    cout << "Creating String Linked List." << endl;
    StringSLList* alphabet[26];
    for (int i = 0; i < 26; i++) {
        // create an object of StringSLList in dynamic memory
        alphabet[i] = new StringSLList();
    }
    cout << "Created array of linked lists." << endl;
    // process array of linked lists

    cout << "Program finished... deleting linked list." << endl;
    for (int i = 0; i < 26; i++) {
        // de-allocate memory
        delete alphabet[i];
    }

    return 0;
}
