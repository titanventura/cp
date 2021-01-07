/*
Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

 

Example 1:


Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: l1 = [], l2 = []
Output: []
Example 3:

Input: l1 = [], l2 = [0]
Output: [0]
*/

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(!l1 && !l2){
            return nullptr;
        }
        if(l1 && !l2){
            return l1;
        }
        if(l2 && !l1){
            return l2;
        }
        
        
        ListNode* rll = new ListNode();
        ListNode* temp = rll;
        
        
        while(l1 && l2){
            if(l1->val<=l2->val){
                temp->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            else{
                temp->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            
            temp = temp->next;
        }
        
        while(l1){
            temp->next = new ListNode(l1->val);
            l1 = l1->next;
            temp = temp->next;
        }
        while(l2){
            temp->next = new ListNode(l2->val);
            l2 = l2->next;
            temp = temp->next;
        }
        
        return rll->next;
        
        
        
        
    }
};