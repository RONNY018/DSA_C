#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DLL {
    Node* head;

public:
    DLL() {
        head = NULL;
    }

    // Insert at beginning
    void insertBeg(int value) {
        Node* temp = new Node();
        temp->data = value;
        temp->prev = NULL;
        temp->next = head;

        if (head != NULL)
            head->prev = temp;

        head = temp;
    }

    // Insert at end
    void insertEnd(int value) {
        Node* temp = new Node();
        temp->data = value;
        temp->next = NULL;

        if (head == NULL) {
            temp->prev = NULL;
            head = temp;
            return;
        }

        Node* ptr = head;
        while (ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = temp;
        temp->prev = ptr;
    }

    // Delete from beginning
    void deleteBeg() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != NULL)
            head->prev = NULL;

        delete temp;
    }

    // Delete from end
    void deleteEnd() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* ptr = head;
        while (ptr->next != NULL)
            ptr = ptr->next;

        ptr->prev->next = NULL;
        delete ptr;
    }

    // Display
    void display() {
        Node* ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << " <-> ";
            ptr = ptr->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DLL list;

    list.insertBeg(5);
    list.insertEnd(15);
    list.insertEnd(25);
    list.display();

    list.deleteBeg();
    list.display();

    list.deleteEnd();
    list.display();

    return 0;
}
