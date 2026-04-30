#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st,int n){
    if (st.empty()){
        st.push(n);
        return;
    }
    int num=st.top();
    st.pop();
    insertAtBottom(st,n);
    st.push(num);
}
void reverseStack(stack<int> &st){
    if (st.empty()) return;
    int num=st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,num);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> temp=st;
    cout<<"Original Stack : ";
    while (!temp.empty()){
        int num=temp.top();
        cout<<num<<" ";
        temp.pop();
    }
    cout<<"\nReversed Stack : ";
    reverseStack(st);
    while (!st.empty()){
        int num=st.top();
        cout<<num<<" ";
        st.pop();
    }

}