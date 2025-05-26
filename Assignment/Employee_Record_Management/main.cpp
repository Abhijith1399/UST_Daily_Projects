#include<iostream>
#include<string>
#include"Employe.h"
#include"Linkedlist.h"
using namespace std;

void menu()
{
    cout << "\nMenu:\n";
    cout << "1. Add employee\n";
    cout << "2. Display all Employee\n";
    cout << "3. Delete Employe by Id\n";
    cout << "4. Search Employee by name\n";
    cout << "5. Update salary by Id\n";
    cout << "6. Count Employee\n";
    cout << "0. Exit\n";
   
}

int main()
{
    int id;
    string name;
    float salary;

    Linkedlist lobj;
    Employee Eobj;

  

    int choice;
    do {
        menu();
        cin >> choice;

        switch (choice) {
        case 1:
            cin >> id >> name >> salary;
            lobj.Addemp(id,name,salary);
            lobj.Display();
            break;

        case 2:
            cout << endl;
            lobj.DisplayAll();
            break;
        case 3:
            cout << "id=";
            cin >> id;
            lobj.Delete(id);
            lobj.DisplayAll();
        case 4:
            cout << "name=";
            cin >> name;
            lobj.Search(name);
           // lobj.DisplayAll();

        case 5:
            cout << "salary:";
            cin >> salary;cout << endl;
            cout << "id:";
            cin >> id;cout << endl;

            lobj.Update(salary, id);
            break;

        case 6:
            lobj.Count();
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 9);


}
