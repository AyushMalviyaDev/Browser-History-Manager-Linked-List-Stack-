#include "BrowserHistory.h"

int main()
{
    BrowserHistory browser;

    browser.visit("google.com");
    browser.visit("github.com");
    browser.visit("youtube.com");
    browser.visit("chatgpt.com");

    browser.displayHistory();

    browser.deleteURL("youtube.com");

    browser.displayHistory();

    return 0;
}