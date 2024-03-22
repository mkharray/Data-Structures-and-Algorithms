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
    bool isPalindrome(ListNode* head) {
        int c = 1;
        if(!head || !head->next)
        return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        //Slow has middle
        ListNode* prev = nullptr;
        ListNode* curr = slow;

        while (curr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        //broke off the second half
        //last element is in prev and order is reversed

        while(prev && head){
            if(head->val != prev->val)
            return false;

            head=head->next;
            prev=prev->next;
        }
        return true;


    }
};