/*
Input:
        2
      /  \
     1    3
K = 5
Output: -1
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function KthSmallestElement() which takes the root of the BST and integer K as inputs and return the Kth smallest element in the BST, if no such element exists return -1.
*/


void inorder_traversal(Node* node,int two_elems[],int k){
    if(node == nullptr){
        return;
    }
    inorder_traversal(node->left,two_elems,k);
    // cout<<node->data<<"is the data";
    
    
    if(two_elems[0] >= k)
        return;
        
    two_elems[1] = node->data;
    two_elems[0]++;
    
    inorder_traversal(node->right,two_elems,k);
    
}

// Return the Kth smallest element in the given BST 
int KthSmallestElement(Node *root, int K)
{
    int two_elems[] = {0,root->data};
    inorder_traversal(root,two_elems,K);
    
    if(K>two_elems[0]){
        return -1;
    }
    
    return two_elems[1];
}