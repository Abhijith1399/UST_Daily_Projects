#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

// LinkedList class
class LinkedList {
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    // Insert at head
    void insertAtHead(int x) {
        Node* node = new Node(x);
        node->next = head;
        head = node;
    }

    // Insert at tail
    void insertAtTail(int x) {
        Node* node = new Node(x);
        if (!head) {
            head = node;
        }
        else {
            Node* cur = head;
            while (cur->next) cur = cur->next;
            cur->next = node;
        }
    }

    // Search for value
    bool search(int x) {
        Node* cur = head;
        while (cur) {
            if (cur->data == x) return true;
            cur = cur->next;
        }
        return false;
    }

    // Delete first occurrence of value
    bool deleteNode(int x) {
        Node* cur = head;
        Node* prev = nullptr;
        while (cur && cur->data != x) {
            prev = cur;
            cur = cur->next;
        }
        if (!cur) return false; // not found
        if (!prev) {
            head = cur->next;
        }
        else {
            prev->next = cur->next;
        }
        delete cur;
        return true;
    }

    // Traverse and print
    void print() {
        for (Node* cur = head; cur; cur = cur->next)
            cout << cur->data << " -> ";
        cout << "NULL\n";
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* cur = head;
        while (cur) {
            Node* tmp = cur;
            cur = cur->next;
            delete tmp;
        }
    }
};
