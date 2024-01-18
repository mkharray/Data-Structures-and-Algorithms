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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c =0;
        ListNode *copy = head;
        while(copy != NULL){
            copy = copy->next;
            c++;
        }
        n = c - n;
        if(n==0)
            return head->next;
        
        c = 1;
        copy = head;
        while(copy != NULL && c <= n){
            if(c == n){
                copy->next = copy->next->next;
            }
            copy = copy->next;
            c++;
        }
        return head;
    }
};