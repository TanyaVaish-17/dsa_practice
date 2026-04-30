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
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> temp=st;
    cout<<"Original array : \n";
    while (!temp.empty()){
        int num=temp.top();
        cout<<num<<" ";
        temp.pop();
    }
    cout<<"\n";
    cout<<"After inserting element 5 at bottom :\n";
    insertAtBottom(st,5);
    while (!st.empty()){
        int num=st.top();
        cout<<num<<" ";
        st.pop();
    }
}