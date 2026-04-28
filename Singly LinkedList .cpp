#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SLL {
    Node* head;

public:
    SLL() {
        head = NULL;
    }

    // Insert at beginning
    void insertBeg(int value) {
        Node* temp = new Node();
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    // Insert at end
    void insertEnd(int value) {
        Node* temp = new Node();
        temp->data = value;
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
            return;
        }

        Node* ptr = head;
        while (ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = temp;
    }

    // Delete from beginning
    void deleteBeg() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
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
        while (ptr->next->next != NULL)
            ptr = ptr->next;

        delete ptr->next;
        ptr->next = NULL;
    }

    // Display
    void display() {
        Node* ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    SLL list;

    list.insertBeg(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.display();

    list.deleteBeg();
    list.display();

    list.deleteEnd();
    list.display();

    return 0;
}
