#include "BrowserHistory.h"

int main()
{
    BrowserHistory browser;

    int choice;
    string url;

    do
    {
        cout << "\n===== Browser History Manager =====" << endl;
        cout << "1. Visit Website" << endl;
        cout << "2. Go Back" << endl;
        cout << "3. Go Forward" << endl;
        cout << "4. Display History" << endl;
        cout << "5. Delete URL" << endl;
        cout << "6. Exit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter URL: ";
                cin >> url;
                browser.visit(url);
                break;

            case 2:
                browser.goBack();
                break;

            case 3:
                browser.goForward();
                break;

            case 4:
                browser.displayHistory();
                break;

            case 5:
                cout << "Enter URL to delete: ";
                cin >> url;
                browser.deleteURL(url);
                break;

            case 6:
                cout << "Thank you for using Browser History Manager!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 6);

    return 0;
}