/**
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
    ListNode* swapPairs(ListNode* head) {
        ListNode *newnode = head;
        int l = 0;
        while(newnode != NULL){
            newnode = newnode->next;
            l++;
        }
        if(l < 2)
            return head;
        
        ListNode *node = new ListNode();
        ListNode *first = node;
        ListNode *second = head;
        
        
        while(second != NULL && second->next){
        first->next = second->next;
        second->next = first->next->next;
        first->next->next = second;
        
        first = second;
        second = second->next;
        }
        
        return node->next;
    }
};