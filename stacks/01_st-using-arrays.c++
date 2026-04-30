#include <bits/stdc++.h>

#define MAX 10
using namespace std;

class Stack{
    public:
    int arr[MAX];
    int top;
    Stack(){
        top=-1;
    };
    void push(int x){
        if (top==MAX-1){
            cout<<"Stack Overflow.\n";
            return;
        }
        arr[++top]=x;
        cout<<x<<" has been pushed successfully.\n";
    }
    void pop(){
        if (top==-1){
            cout<<"Stack Underflow.\n";
            return;
        }
        top--;
    }
    void peek(){
       cout<<"Top element : "<<arr[top]<<"\n"; 
    }
};
int main(){
    Stack s;
    int choice, value;

    while(true){
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                if(s.top == -1)
                    cout << "Stack is empty.\n";
                else
                    s.peek();
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice.\n";
        }
    }
    return 0;
}