#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
    Node *front, *rear;

public:
    Queue() {
        front = rear = NULL;
    }

    // Enqueue
    void enqueue(int value) {
        Node* temp = new Node();
        temp->data = value;
        temp->next = NULL;

        if (rear == NULL) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
        cout << value << " inserted\n";
    }

    // Dequeue
    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow\n";
            return;
        }
        Node* temp = front;
        cout << temp->data << " deleted\n";
        front = front->next;

        if (front == NULL) rear = NULL;
        delete temp;
    }

    // Display
    void display() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.display();

    q.dequeue();
    q.display();

    return 0;
}
