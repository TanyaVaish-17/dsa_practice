#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st,int n){
    if (st.size()==1){
        st.pop();
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
    while (!temp.empty()){
        cout<<temp.pop()<<" ";
    }
    insertAtBottom(st,5);
}