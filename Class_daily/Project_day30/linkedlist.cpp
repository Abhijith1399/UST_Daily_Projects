#include<iostream>
using namespace std;

class Node
{
private:
    int data;
    Node* next;
public:
    Node()
    {
        data = 0;
        next = nullptr;
    }
    void setsdata(int d)
    {
        data = d;
    }
    int getdata()
    {
        return data;
    }
    void setnext(Node* n)
    {
        next = n;
    }
    Node* getnext()
    {
        return next;
    }
};
class Linkedlist
{
private:
    Node* head;
public:
    Linkedlist()
    {
        head = nullptr;
    }
    void sethead(Node* h)
    {
        head = h;
    }
    Node* gethead()
    {
        return head;
    }
    void insertBeg(int);
    void insertEnd(int);
    void deleteBeg(int);
   //void insertPosition(Node*,Node*);
    /**


    Node* deletePosition();
    Node* deleteEnd();
    Node* search();
    Node* list();*/


    void display()
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            cout << temp->getdata();
            temp = temp->getnext();
        }

    }

};

void Linkedlist::insertBeg(int v)
{
    Node* Newnode = new Node;

    if (head == NULL)
    {
        head = Newnode;
        return;
    }
    Newnode->setnext(head);
    Newnode->setsdata(v);
    head = Newnode;



}
/**
void Linkedlist::insertPosition(Node* next,Node*data)
{
    Node* Newnode = new Node;
    int n;
    int d;
    int count;
    cout << "enter the position" << endl;
    Newnode->setnext(next);
    cout << "enter the element" << endl;
    Newnode->getdata();

        if (head = NULL)
        {
            head = Newnode;
            return;
        }
    Node* temp = head;
    while (temp->getnext() != NULL)
    {
        count++;
        if (count == n)
        {
            temp = temp->getnext();
        }
    }

    temp->setnext(Newnode);

}*/
void Linkedlist::insertEnd(int v)
{
    Node* Newnode = new Node;
    Newnode->setsdata(v);
    if (head == NULL)
    {
        head = Newnode;
        return;
    }
    Node* temp = head;
    while (temp->getnext() != NULL)
    {
        temp = temp->getnext();
    }

    temp->setnext(Newnode);

}



void Linkedlist::deleteBeg(int v)
{
    Node* temp = head;
    if (head == NULL)
    {
        cout << "its emplty";
        return;
    }
    head = head->getnext();
    delete temp;
}
/**
Node* Linkedlist::deletePosition()
{

}
Node* Linkedlist::deleteEnd()
{

}
Node* Linkedlist::search()
{

}
Node* Linkedlist::list()
{

}*/

void menu()
{
    cout << "\nMenu:\n";
    cout << "1. Insert at the Beginning\n";
    cout << "2. Insert at a Position\n";
    cout << "3. Insert at the End\n";
    cout << "4. Delete from the Beginning\n";
    cout << "5. Delete from a Position\n";
    cout << "6. Delete from the End\n";
    cout << "7. Search an Element\n";
    cout << "8. Print List\n";
    cout << "9. Exit\n";
    cout << "Enter your choice: ";
}


int main()
{

    Node nobj;
    Linkedlist lobj;

    int choice;
    do {
        menu();
        cin >> choice;

        switch (choice) {
        case 1:
            lobj.insertBeg(10);
            lobj.insertBeg(20);
            lobj.insertBeg(30);
            lobj.insertBeg(40);
            lobj.insertBeg(50);
            lobj.insertBeg(60);

            lobj.display();
            choice = 10;
            break;

        case 2:
         //   lobj.insertPosition(nobj.getnext(),nobj.setdata(10));

           // lobj.display();
            //choice = 10;
            //break;

        case 3:
            lobj.insertEnd(10);
            lobj.display();
            choice = 10;
            break;

        case 4:
            lobj.deleteBeg(10);
            lobj.display();
            choice = 10;

        case 5:

            break;

        case 6:

            break;

        case 7:

            break;

        case 8:

            break;

        case 9:

            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 9);

    return 0;


}