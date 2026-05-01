// Level order traversal
// TC : 0(n) 
// SC : 0(n) for queue
// Used for : Shortest path in unweighted tree, Level-wise processing, Finding height (with level tracking)

#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;
    if (root==NULL) return ans;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()){
        int size=q.size();
        vector<int> level;
        for (int i=0;i<size;i++){
            Node* node=q.front();
            q.pop();
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    vector<vector<int>> ans = levelOrder(root);
    for (auto &level :ans){
        for (int x : level){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}