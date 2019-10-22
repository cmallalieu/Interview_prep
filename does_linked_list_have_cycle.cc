#include <iostream>
#include <vector>

// C++11 lest unit testing framework
#include "lest.hpp"

using namespace std;

class LinkedListNode {
public:
    int intValue_;
    LinkedListNode* next_;

    LinkedListNode(int value) :
        intValue_(value),
        next_(nullptr)
    {
    }
};

bool containsCycle(LinkedListNode* firstNode)
{
    // if the list is empty
    if (!firstNode)
    {
        cout << "Empty List" << endl;
        return false;
    }

    // create set of nodes already seen
    set<LinkedListNode*> seenNodes;
    LinkedListNode* currentNode = firstNode;
    
    // while there are still nodes to check
    while (currentNode)
    {
        // if the node was already visited return true to cycle
        if (seenNodes.count(currentNode) == 1)
        {
            return true;
        }
        else
        {
            seenNodes.insert(currentNode);
            currentNode = currentNode->next_;
        }
    }
    return false;
}

