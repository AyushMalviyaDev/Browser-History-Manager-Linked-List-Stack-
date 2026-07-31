#ifndef BROWSER_HISTORY_H
#define BROWSER_HISTORY_H

#include <iostream>
#include <stack>

using namespace std;

// Node Class
class Node
{
public:
    string url;
    Node* next;

    Node(string url)
    {
        this->url = url;
        next = NULL;
    }
};

// Browser History Class
class BrowserHistory
{
private:
    Node* head;
    Node* tail;
    Node* current;

    stack<Node*> backStack;
    stack<Node*> forwardStack;

public:
    BrowserHistory();

    void visit(string url);

    void goBack();

    void goForward();

    void displayHistory();

    void deleteURL(string url);
};

#endif