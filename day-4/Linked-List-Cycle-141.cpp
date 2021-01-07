/*
Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

 

Example 1:


Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
Example 2:


Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
Example 3:


Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next==NULL) return false;
        
        
        ListNode* temp = head;
        
        unordered_set<ListNode*> set;
        
        while(true){
            if(set.find(temp) != set.end()){
                return true;
            }
            if(temp == NULL){
                return false;
            }
        vector<int> B = A;
        reverse(B.begin(),B.end());
        int carry = 0;
        vector<int> result;
        vector<int> k;
        while(K!=0) {​
            k.push_back(K%10);
            K/=10;
        }​
        for(int i=0;i<max(B.size(),k.size());i++) {​ 
            int r = 0;
            r+=carry;
            if(i<k.size()){​
                r+=k[i];
            }​
            if(i<B.size()) {​
            
            set.insert(temp);
            temp = temp->next;
            
        }
        
    }
};