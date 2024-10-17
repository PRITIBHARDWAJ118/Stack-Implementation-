#include<iostream>
using namespace std;

class Stack 
{
    public:
    int top;
    const int max=200;
    int arr[200];
    
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == max - 1) {
            cout << "stack is full " << value << endl;
            return;
        } 
        else {
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " to the stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow. No elements to pop." << endl;
        } else {
            cout << "Popped " << arr[top] << " from the stack." << endl;
            top--;
        }
    }
   void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
   }
};
    int main() 
    {
    Stack s; 
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
   

    s.display();

    s.pop();
    s.pop();
    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.pop();  // This will cause stack underflow

    return 0;
}
    
