
#include"User.h"
#include"Cdr.h"
#include<iostream>

using namespace std;


int main()
{
    string username, password;
    map<string, vector<int>>Cdr;
    map<int, vector<string>>user;

    cout << "1.sighn up" << endl;
    cout << "2.login in" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter choice (1-3): ";
    int option;
    User obj;
    CDR cobj;
    while (true)
    {
        cin >> option;
        switch (option)
        {
        case 1:
            obj.signup(user);
            break;
        case 2:
            obj.login(username, password);
            cobj.menu(Cdr);
            break;
        case 3:
            cout << "Exit...\n";
            return 0;
        default:
            cout << "Invalid choice" << endl;

        }
    }
}
