/*
Given a Binary Search Tree and a node value X, find if node with value X is present in the BST or not. 

Example 1:

Input:
         2
          \
          81
        /    \
      42      87
    /   \       \
   45   66      90
x = 87
Output: 1
Explanation: As 87 is present in the
given nodes , so the output will be
1.
Example 2:

Input:
      6
       \
        7
       / \
      8   9
x = 11
Output: 0
Explanation: As 11 is not present in 
he given nodes , so the output will
be 0.
*/

/*You are required to complete this method*/
bool search(Node* root, int x)
{
    if(root == nullptr){
        return false;
    }
    
    if(root->data == x)
    return true;
    
    if(x>root->data){
        return search(root->right,x);
    }
    return search(root->left,x);
}
