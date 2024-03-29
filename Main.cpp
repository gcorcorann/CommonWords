/*
 * Main.cpp
 *
 * Created on: Monday September 3rd 2019
 * Author: Patrick Corcoran
 *
 */
#include <string>
#include <fstream>
#include <iostream>
#include "StringSLList.h"

using namespace std;

int main() {
    // create an array of pointers to 26 linked lists (one for each letter in alphabet)
    cout << "Creating String Linked List." << endl;
    StringSLList* alphabet[26];
    for (int i = 0; i < 26; i++) {
        // create an object of StringSLList in dynamic memory
        alphabet[i] = new StringSLList();
    }
    cout << "Created array of linked lists." << endl;
    string line;
    // open file
    ifstream myfile ("words.txt");
    if (myfile.is_open()) {
        // get each line and store in line variable
        while (getline(myfile, line)) {
            // find first instance of white space
            string::size_type foundBegin = line.find_first_of(' ');
            // find last instance of white space
            string::size_type foundEnd = line.find_last_of(' ');
            // create a substring containing just word
            string word = line.substr(foundBegin + 2, foundEnd - foundBegin - 2);
            // change each word to its lower case equivalent
            for (string::size_type i = 0; i < word.size(); i++) {
                word[i] = tolower(word[i]);
            }
            cout << "Storing: " << word << "." << endl;
            // convert first letter of word to int ('a' -> 0)
            int index = int(word[0]) - 97;
            // only store characters
            if (index >= 0 && index < 26) {
                cout << "index: " << index << endl;
                // add to linked list
                alphabet[index]->addToHead(word);
            }
        }
        myfile.close();

        // print linked list contents
        for (int i = 0; i < 26; i++) {
            alphabet[i]->printAll();
        }
    }
    else {
        cout << "Unable to open file." << endl;
        return 0;
    }
    // ask to sort lists
    cout << "Do you want to sort the lists? (Enter 'yes' if so)" << endl;
    string userInput;
    cin >> userInput;
    if (userInput[0] == 'y') {
        cout << endl << "Sorted List." << endl;
        for (int i = 0; i < 26; i ++) {
            alphabet[i]->bubbleSort();
            alphabet[i]->printAll();
        }
    }

    cout << "Program finished... deleting linked list." << endl;
    for (int i = 0; i < 26; i++) {
        // de-allocate memory
        delete alphabet[i];
    }

    return 0;
}
