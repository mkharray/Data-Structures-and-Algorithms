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
        ListNode *newlist = new ListNode();
        ListNode *biglist = new ListNode();
        ListNode *newlisthead = newlist;
        ListNode *biglisthead = biglist;
        ListNode *curr = head;
        while(curr!= NULL){
            if (curr->val < x){
                newlist->next = curr;
                newlist= newlist->next;
                }
            else{
                biglist->next = curr;
                biglist = biglist->next;
            }
            curr= curr->next;
    }
        newlist->next = biglisthead->next;
        biglist->next = NULL;
        return newlisthead->next;
        }
};