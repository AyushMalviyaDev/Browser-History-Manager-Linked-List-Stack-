#include "BrowserHistory.h"

BrowserHistory::BrowserHistory()
{
    head = NULL;
    tail = NULL;
    current = NULL;
}



void BrowserHistory::visit(string url)
{
    Node* newNode = new Node(url);

    // First website
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        current = newNode;
        return;
    }

    // Save current page before moving
    backStack.push(current);

    // Visiting a new page clears forward history
    while(!forwardStack.empty())
    {
        forwardStack.pop();
    }

    // Add new page at the end
    tail->next = newNode;
    tail = newNode;

    // Update current page
    current = newNode;
}