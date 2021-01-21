/*
Given a binary tree, find the Postorder Traversal of it.
For Example, the postorder traversal of the following tree is:  5 10 39 1

        1
     /     \
   10     39
  /
5

Example 1:

Input:
        19
     /     \
    10      8
  /    \
 11    13
Output: 11 13 10 8 19

Example 2:

Input:
          11
         /
       15
      /
     7
Output: 7 15 11
Your Task:
You don't need to read input or print anything. Your task is to complete the function postOrder() that takes root node as input and returns an array containing the postorder traversal of the given Binary Tree.

*/

// Solution

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */



void post_order_helper(Node* root,vector<int>& array){
    if(root == nullptr){
        return;
    }
    
    post_order_helper(root->left,array);
    post_order_helper(root->right,array);
    array.push_back(root->data);
    
}


vector<int> postOrder(Node* root)
{
   vector<int> array;
  post_order_helper(root,array);
  return array;
}



