#include <iostream>
using namespace std;

int maxSize;
int *stack;
int top = -1;

bool isFull() {
     urn top == maxSize - 1;
}

bool isEmpty() {
    return top == -1;
}

void push(int value) {
    if (isFull()) {
        cout << "\n[!] Stack Overflow! Cannot add " << value << endl;
    } else {
        stack[++top] = value;
        cout << "\n[+] " << value << " pushed to stack.\n";
    }
}

int pop() {
    if (isEmpty()) {
        cout << "\n[!] Stack Underflow! No elements to remove.\n";
        return -1;
    } else {
        return stack[top--];
    }
}

void peek() {
    if (isEmpty()) {
        cout << "\nStack is empty.\n";
    } else {
        cout << "\nTop element is: " << stack[top] << endl;
    }
}

int main() {
    int choice, value;

    cout << "Enter maximum size of the stack: ";
    cin >> maxSize;

    if (maxSize <= 0) {
        cout << "Invalid size. Exiting...\n";
        return 1;
    }

    stack = new int[maxSize];  

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Check Empty/Full\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;

            case 2:
                value = pop();
                if (value != -1)
                    cout << "Popped: " << value << endl;
                break;

            case 3:
                peek();
                break;

            case 4:
                if (isFull())
                    cout << "Stack is Full.\n";
                else if (isEmpty())
                    cout << "Stack is Empty.\n";
                else
                    cout << "Stack has space available (" 
                         << top + 1 << "/" << maxSize << " used).\n";
                break;

            case 5:
                delete[] stack;   
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
