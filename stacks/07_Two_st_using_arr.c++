#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int top1;
    int top2;
    int size;
    int *arr;
    Stack(int s){
        this->size=s;
        top1=-1;
        top2=s;
        arr=new int[s];
    }
    void push1(int x){
        if (top2-top1>1) arr[++top1]=x;
    }
    void push2(int x){
        if (top2-top1>1) arr[--top2]=x;
    }
    int pop1(){
        if (top1==-1) return -1;
        else return arr[top1--];
    }
    int pop2(){
        if (top2==size) return -1;
        else return arr[top2++];
    }
};
int main(){
    Stack st(15);
    st.push1(10);
    st.push1(20);
    st.push2(30);
    st.push2(40);
    st.push1(50);
    st.push2(60);
    cout<<"Top element from stack 1 : "<<st.pop1()<<"\n";
    cout<<"Top element from stack 2 : "<<st.pop2();
}