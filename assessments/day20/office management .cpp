#include <iostream>
using namespace std;
#define max 5

void menu();
void Add_Product(string[], int[]);  
void Remove_product(string[],int[]);
void update_product(string[], int[]);
void search_product(string[], int[]);
void list_product(string[], int[]);

void menu()
{
    cout << "Menu:"<<endl;
    cout << "1. Add product"<<endl;
    cout << "2. Remove product"<<endl;
    cout << "3. Update product"<<endl;
    cout << "4. Search product"<<endl;
    cout << "5. List products"<<endl;
    cout << "6. Exit"<<endl;
    cout << "Enter choice (1-6): ";
}

void Add_Product(string additem[], int quantity[])
{
    
    cout << "enter the item and quantity "<<endl;

    for (int i = 0; i < max; i++) {
        cout << "item " << i + 1 << " = "<<endl;
        cin >> additem[i];
        cout << "quantity of " << additem[i] << "= " << endl;
        cin >> quantity[i];
    }
      cout << "all items sucessfully updated"<<endl;
    for (int i = 0; i < max; i++) {
        cout << additem[i] << "= " << quantity[i] << endl;
    }
}

void Remove_product(string additem[], int quantity[])
{
    string remove;
    cout << "Enter the item you want to remove: ";
    cin >> remove;
   
    bool flag = false;
    for (int i = 0; i < max; i++) {
        if (additem[i] == remove) {

            for (int j = i; j < max - 1; j++) {
                additem[j] = additem[j + 1];
                quantity[j] = quantity[j + 1];

            }  additem[max - 1] = "";
            quantity[max - 1] = 0;
            flag = true;
            break;
        }
    }   if (flag) {
        cout << remove << " has been removed.\n";
    }
    else {
        cout << "Product not found.\n";
    }
}
void update_product(string additem[], int quantity[])
{

    cout << "enter the item and quantity " << endl;

    for (int i = 0; i < max; i++) {
        cout << "item " << i + 1 << " = " << endl;
        cin >> additem[i];
        cout << "quantity of " << additem[i] << "= " << endl;
        cin >> quantity[i];
    }
    cout << "all items sucessfully inserted" << endl;
    for (int i = 0; i < max; i++) {
        cout << additem[i] << "= " << quantity[i] << endl;
    }
}
/*
void search_product(string additem[], int quantity[])
{
    cout << "list:" << endl;
    for (int i = 0; i < max; i++) {
       // if (additem[i]!= quantity[i]) {
            cout << additem[i] << "=" << quantity[i] << endl;
        }
      ///  else
            cout << "item not found" << endl;
    }
    
}*/

void list_product(string additem[], int quantity[])
{
    cout << "list:" << endl;
    for (int i = 0; i < max; i++) {
        if (additem[i] != "") {
            cout << additem[i] << "=" << quantity[i] << endl;
        }
    }
}

int main()
{
    string additem[10];  
    int quantity[10];    
    int option;

    while (true) {
        menu();
        cin >> option;

        switch (option) {
        case 1:
            Add_Product(additem, quantity);
            break;
        case 2:
            Remove_product(additem, quantity);
            break;
        case 3:
            update_product(additem, quantity);
            break;
        case 4:
            search_product(additem, quantity);
            break;
        case 5:
            list_product(additem, quantity);
            break;
        case 6:
            cout << "Exit...\n";
            return 0;
        default:
            cout << "Invalid choice"<<endl;
        }
    }

    return 0;
}
