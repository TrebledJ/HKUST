//do NOT submit this file.
//you may modify it to test your own test cases.
//however, make sure that your code can be compiled with the unmodified version of this file.

#include <iostream>
#include <string>
#include <list>
#include "LibraryItem.h"
#include "Book.h"
#include "BST.h"
#include "HashTable.h"
#include "Library.h"

using namespace std;

template<typename T>
std::ostream &operator<<(std::ostream &os, const BST<T> &t) {
    t.printTree(os);
    return os;
}


std::ostream &operator<<(std::ostream &os, const Library &library) {
    os << "Library: " << library.getName() << ", Number of Library Item: " << library.getNumberOfItems();
    return os;
}

template<typename A, typename B>
std::ostream &operator<<(std::ostream &os, const HashTable<A, B> &ht) {
    ht.print(os);
    return os;
}

std::ostream &operator<<(std::ostream &os, const Mode &m) {
    switch (m) {
        case Mode::LINEAR:
            os << "LINEAR";
            break;

        case Mode::DOUBLE:
            os << "DOUBLE";
            break;

        case Mode::QUADRATIC:
            os << "QUADRATIC";
            break;
    }
    return os;
}

int main() {
    cout << boolalpha;

    int testCase = 18;

    cout << endl << "=== Test case " << testCase << " ===" << endl << endl;

    if (testCase == 18) //additional tests of HashTable<K,T>::add and get, with rehashing
    {

        const char *names[] = {
                "Book A",
                "Book B",
                "Book C",
                "Book D",
                "Book E",
                "Book F",
        };
        const int publishedDates[] = {
                20201201,
                20201202,
                20201203,
                20210103,
                20201101,
                20201102,
        };
        const char *locations[] = {
                "1f,SectionA",
                "1f,SectionB",
                "2f,SectionA",
                "2f,SectionB",
                "3f,SectionA",
                "3f,SectionB",
        };

        {
            cout << "Testing BST below..." << endl;
            int numberOfItems = sizeof(names) / sizeof(*names);
            LibraryItem *items[numberOfItems];
            BST<LibraryItem *> itemTree;
            for (int i = 0; i < numberOfItems; ++i) {
                items[i] = new Book(names[i], publishedDates[i], locations[i]);
                itemTree.add(
                        to_string(items[i]->getPublishedDate()), items[i]);
            }
            itemTree.printTree(cout);
            list < LibraryItem * > *itemList = itemTree.getBetweenRange(to_string(publishedDates[0]),
                                                                        to_string(publishedDates[2]));
            cout << "Length of list: " << itemList->size() << endl;
            for (list<LibraryItem *>::iterator it = itemList->begin(); it != itemList->end(); ++it) {
                cout << **it << endl;
            }

            // delete itemList;
            for (int i = 0; i < numberOfItems; ++i) {
                delete items[i];
            }
            cout << endl;
        }
    } //end of test case

    return 0;

}
