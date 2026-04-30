#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Stack{
    Node* top;
    public:
    Stack(){
        top=NULL;
    }
    void push(int ele){
        Node* newNode=new Node(ele);
        newNode->next=top;
        top=newNode;
    }
    void pop(){
        Node* temp=top;
        top=top->next;
        cout<<temp->data<<" has been popped\n";
        delete temp;
    }
    void peek(){
        cout<<top->data<<"\n";
    }
};
int main(){
    Stack st;
    int ch,val;
    while (true){
        cout<<"---Stack Menu---\n";
        cout<<"1.Push\n";
        cout<<"2.Pop\n";
        cout<<"3.Peek\n";
        cout<<"4.Exit\n";
        cin>>ch;
        switch(ch){
            case 1:
            cin>>val;
            st.push(val);
            cout<<val<<" has been pushed successfully";
            break;

            case 2:
            st.pop();
            break;

            case 3:
            st.peek();
            break;

            case 4:
            cout<<"Exiting....\n";
            return 0;
        }
    }
}