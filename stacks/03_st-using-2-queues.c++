#include <bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q1,q2;
    public:
    void push(int x){
        q2.push(x);
        while (!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    int pop(){
        int temp=q1.front();
        q1.pop();
        return temp;
    }
    int top(){
        return q1.front();
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl; // 30
    cout << st.pop() << endl; // 30
    cout << st.top() << endl; // 20

    return 0;
}