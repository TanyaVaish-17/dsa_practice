#include <bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q1,q2;
    public:
    void push(int x){
        q1.push(x);
    }
    int pop(){
        if (q1.empty()) return -1;
        while (q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int topi=q1.front();
        q1.pop();
        swap(q1,q2);
        return topi;
    }
    int top(){
        if (q1.empty()) return -1;
        while (q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int topi=q1.front();
        q1.pop();
        q2.push(topi);
        swap(q1,q2);
        return topi;
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