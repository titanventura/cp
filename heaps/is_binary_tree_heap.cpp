/*
Given a binary tree you need to check if it follows max heap property or not.
Input:
The task is to complete the method which takes one argument, root of Binary Tree. The struct Node has a data part which stores the data, pointer to left child and pointer to right child.There are multiple test cases. For each test case, this method will be called individually.

Output:
The function should return true if property holds else false.
 

Constraints:
1 <=T<= 30
1 <=Number of nodes<= 100
1 <=Data of a node<= 1000

Example:
Input:
2
2
5 2 L 5 3 R
4
10 20 L 10 30 R 20 40 L 20 60 R

Output:
1
0

*/

bool isHeap(Node * root)
{
    if(root == nullptr){
        return true;
    }
    
    if(root->left !=nullptr && root->right != nullptr){
        if(root->data > root->left->data && root->data > root->right->data){
            return isHeap(root->left) && isHeap(root->right);
        }
        else{
            return false;
        }
    }
    else if(root->left){
        return isHeap(root->left);
    }
    else if(root->right){
        return isHeap(root->right);
    }
    return true;
}