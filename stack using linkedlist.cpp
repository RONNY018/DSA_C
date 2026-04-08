
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class StackLL {
private:
    Node* top;

public:
  
    StackLL() {
        top = NULL;
    }

    bool isEmpty() {
        return (top == NULL);
    }

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        cout << x << " pushed into stack\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        cout << temp->data << " popped from stack\n";
        top = top->next;
        delete temp;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top element: " << top->data << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    StackLL s;

    s.push(5);
    s.push(15);
    s.push(25);
    s.display();

    s.peek();
    s.pop();
    s.display();

    return 0;
}
