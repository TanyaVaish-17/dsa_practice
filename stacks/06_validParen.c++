#include <bits/stdc++.h>
using namespace std;
bool isValid(string s){
    stack<char> st;
    for (char c: s){
        if (c=='(' || c=='[' || c=='{'){
            st.push(c);
        }
        else{
            if (st.empty()) return false;
            int top=st.top();
            st.pop();
            if ((c==')' && top!='(') || (c==']' && top!='[') || (c=='}' && top!='{')){
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string s;
    cin>>s;
    bool ans=isValid(s);
    cout<<ans<<"\n";
}