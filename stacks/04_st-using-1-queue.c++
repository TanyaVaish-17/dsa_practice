#include <bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q;
    public:
    void push(int x){
        q.push(x);
        for (int i=1;i<q.size();i++){
            q.push(q.front());
            q.pop();
        }
    }
    int pop(){
        int temp=q.front();
        q.pop();
        return temp;
    }
    int top(){
        return q.front();
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