// preorder traversal :
// Time complexity : 0(n)   (Since every node is visited)
// Space complexity : O(h) , Worst case : 0(n) -> Skewed , Best cases : 0(log n) -> Balanced tree
// Use cases : Creating a copy of tree, Prefix expression (expression trees), Tree serialization, When root processing is needed before children

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

// Recursive implementation
void preorderRecursive(Node* root){
    if (root==NULL) return;
    cout<<root->data<<" ";
    preorderRecursive(root->left);
    preorderRecursive(root->right);
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    preorderRecursive(root);
}