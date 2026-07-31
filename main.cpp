#include "BrowserHistory.h"

int main()
{
    BrowserHistory browser;

    browser.visit("google.com");
    browser.visit("github.com");
    browser.visit("youtube.com");
    browser.visit("chatgpt.com");

    browser.displayHistory();

    browser.goBack();
    browser.goBack();

    browser.displayHistory();

    return 0;
}