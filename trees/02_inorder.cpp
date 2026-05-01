// Inorder traversal :
// Works on BSTs (Binary Search Tree)
// It always give sorted output
// Time complexity : 0(n)   (Since every node is visited)
// Space complexity : O(h) , Worst case : 0(n) -> Skewed
// Use cases : to get sorted elements from bst , to validate if a tree is binary or not , Tree flatening / serialization

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
void inorderRecursive(Node* root){
    if (root==NULL) return;
    inorderRecursive(root->left);
    cout<<root->data<<" ";
    inorderRecursive(root->right);
}

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    inorderRecursive(root);
}