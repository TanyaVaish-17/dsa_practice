#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &st,int count,int n){
    if (count==n/2){
        st.pop();
        return;
    }
    int num=st.top();
    st.pop();
    solve(st,count+1,n);
    st.push(num);
}
void deleteMiddle(stack<int> &st,int n){
    int count=0;
    solve(st,count,n);
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
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<"\n";
    deleteMiddle(st,5);
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}