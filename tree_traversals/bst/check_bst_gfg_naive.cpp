/*Example 1:

Input:
    2
 /    \
1      3
Output: 1
Explanation:
The left subtree of root node contains node
with key lesser than the root node’s key and
the right subtree of root node contains node
with key greater than the root node’s key.
Hence, the tree is a BST.
Example 2:

Input:
  2
   \
    7
     \
      6
       \
        5
         \
          9
           \
            2
             \
              6
Output: 0
Explanation:
Since the node with value 7 has right subtree
nodes with keys less than 7, this is not a BST.
Your Task:
You don't need to read input or print anything. Your task is to complete the function isBST() which takes the root of the tree as a parameter and returns 1 if the given binary tree is BST, else returns 0. */


void pre_order(Node *node, vector<int> &vals) {
    if (node == nullptr)
        return;

    pre_order(node->left, vals);
    vals.push_back(node->data);
    pre_order(node->right, vals);
}

bool isBST(Node *root) {
    // Your code here

    vector<int> vals;
    pre_order(root, vals);

    for (int i = 0; i < vals.size() - 1; i++) {
        if (vals[i] >= vals[i + 1]) {
            return false;
        }
    }

    return true;

}
