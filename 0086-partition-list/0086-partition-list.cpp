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
    ListNode* partition(ListNode* head, int x) {
        ListNode *smalllist = new ListNode();
        ListNode *biglist = new ListNode();
        ListNode *smalllisthead = smalllist;
        ListNode *biglisthead = biglist;
        ListNode *curr = head;
        while(curr!= NULL){
            if (curr->val < x){
                smalllist->next = curr;
                smalllist= smalllist->next;
                }
            else{
                biglist->next = curr;
                biglist = biglist->next;
            }
            curr= curr->next;
    }
        smalllist->next = biglisthead->next;
        biglist->next = NULL;
        return smalllisthead->next;
        }
};