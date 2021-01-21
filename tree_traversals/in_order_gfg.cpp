/*
Given a Binary Tree, find the In-Order Traversal of it.

Example 1:

Input:
       1
     /  \
    3    2
Output: 3 1 2

Example 2:

Input:
        10
     /      \ 
    20       30 
  /    \    /
 40    60  50
Output: 40 20 60 10 50 30

Your Task:
You don't need to read input or print anything. Your task is to complete the function inOrder() that takes root node of the tree as input and returns a list containing the In-Order Traversal of the given Binary Tree.
*/

// Solution

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */


// Return a vector containing the inorder traversal of the tree

void in_order_helper(Node* root,vector<int>& array){
    if(root == nullptr){
        return;
    }
    in_order_helper(root->left,array);
        array.push_back(root->data);
    in_order_helper(root->right,array);
    
}


vector<int> inOrder(Node* root)
{
  // Your code here
  vector<int> array;
  in_order_helper(root,array);
  return array;
  
}

void preOrder(Node* root, int arr[]){
    if(root == nullptr){
        return;
    }
    preOrder(root->left,arr[]);
    arr[0]+=node->data;
    preOrder(root->right,arr[]);
}