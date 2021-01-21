/*
Given a binary tree, find its preorder traversal.

Example 1:

Input:
        1      
      /          
    4    
  /    \   
4       2
Output: 1 4 4 2 
Example 2:

Input:
       6
     /   \
    3     2
     \   / 
      1 2
Output: 6 3 1 2 2 

Your Task:
You just have to complete the function preorder() which takes the root node of the tree as input and returns an array containing the preorder traversal of the tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
*/

// Solution

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/


void pre_order_helper(Node* root,vector<int>& array){
    if(root == nullptr){
        return;
    }
    
    array.push_back(root->data);
    pre_order_helper(root->left,array);
    pre_order_helper(root->right,array);
    
}


vector <int> preorder(Node* root)
{
   vector<int> array;
  pre_order_helper(root,array);
  return array;
  
}