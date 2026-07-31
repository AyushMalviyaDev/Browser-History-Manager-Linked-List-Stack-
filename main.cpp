#include "BrowserHistory.h"

int main()
{
    BrowserHistory browser;

    browser.visit("google.com");
    browser.visit("github.com");
    browser.visit("youtube.com");

    cout << "Websites visited successfully!" << endl;

    return 0;
}