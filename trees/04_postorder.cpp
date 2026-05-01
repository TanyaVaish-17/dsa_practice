// postorder traversal :
// Time complexity : 0(n)   (Since every node is visited)
// Space complexity : O(h) , Worst case : 0(n) -> Skewed , Best cases : 0(log n) -> Balanced tree
// Use cases : Deleting/freeing a tree (children first, then root) , Evaluating expression trees, When child nodes must be processed before parent

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
void postorderRecursive(Node* root){
    if (root==NULL) return;
    postorderRecursive(root->left);
    postorderRecursive(root->right);
    cout<<root->data<<" ";
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    postorderRecursive(root);
}