#include <iostream>
using namespace std;

const int MAX_SIZE = 5; // Define the maximum size of the stack

class Stack {
private:
    int data[MAX_SIZE];
    int topIndex;

public:
    Stack() : topIndex(-1) {} // Constructor to initialize the stack

    // Push element to the top of the stack
    void push(int value) {
        if (topIndex >= MAX_SIZE - 1) {
            cout<< "Error: Stack overflow. Cannot push."<<endl;
            return;
        }
        data[++topIndex] = value;
    }

    // Remove and return the top element from the stack
    int pop() {
        if (topIndex < 0) {
            cout<< "Error: Stack is empty. Cannot pop."<<endl;
            return -1; // You can return any sentinel value or throw an exception as per your requirement
        }
        return data[topIndex--];
    }

    // Get the top element of the stack without removing it
    int peek() const {
        if (topIndex < 0) {
            cout<< "Error: Stack is empty. Cannot peek."<<endl;
            return -1; // You can return any sentinel value or throw an exception as per your requirement
        }
        return data[topIndex];
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return topIndex == -1;
    }

    // Get the size of the stack
    size_t size() const {
        return static_cast<size_t>(topIndex + 1);
    }
};

int main() {
    Stack stack;

    // Push some elements into the stack
    stack.push(5);
    stack.push(10);
    stack.push(15);
    stack.push(20);
    stack.push(25);

    // The next push will cause a stack overflow
    stack.push(30);

    // Peek and pop elements from the stack
    cout << "Top element: " << stack.peek() << endl;

    while (!stack.isEmpty()) {
        cout << "Popped element: " << stack.pop() << endl;
    }

    return 0;
}
