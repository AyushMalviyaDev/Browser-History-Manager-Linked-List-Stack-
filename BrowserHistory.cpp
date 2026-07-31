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

void BrowserHistory::displayHistory()
{
    if(head == NULL)
    {
        cout << "History is empty." << endl;
        return;
    }

    Node* temp = head;

    cout << "\nBrowsing History:\n";
    cout << "------------------" << endl;

    while(temp != NULL)
    {
        if(temp == current)
            cout << temp->url << "  <-- Current Page" << endl;
        else
            cout << temp->url << endl;

        temp = temp->next;
    }

    cout << endl;
}

void BrowserHistory::goBack()
{
    if(backStack.empty())
    {
        cout << "No previous page available." << endl;
        return;
    }

    forwardStack.push(current);

    current = backStack.top();
    backStack.pop();

    cout << "Current Page: " << current->url << endl;
}