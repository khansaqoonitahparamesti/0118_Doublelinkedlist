#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
private:
    Node *START;

public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nEnter the roll number of the student: ";
        cin >> nim;

        // step 1: Allocate memory for new node
        Node *newNode = new Node();

        // step 2: assign value to the data field
        newNode->noMhs = nim;

        // step 3: insert node in ascending order
        if (START == NULL || nim <= START->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
            {
                cout << "\nDuplicate roll numbers not allowed" << endl;
                return;
            }

            // Step 4: make next of newnode = START
            newNode->next = START;

            // Step 5: START->prev = newNode (if START exists)
            if (START != NULL)
                START->prev = newNode;

            // Step 6: newNode->prev = NULL
            newNode->prev = NULL;

            // Step 7: START = newNode
            START = newNode;
            return;
        }

    }
};