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
        if((head->next == NULL && n == 1) || (head == NULL))
            return NULL;
        int cn= 0;
        ListNode *c = head;
        while(c != NULL){
            c=c->next;
            cn++;
        }

        if(cn == n)
        return head->next;
        
        n = cn-n+1;
        cn = 1;
        c = head;
        ListNode*prev;
        
        while(c != NULL){
            if(cn == n){
                prev->next = c->next;
                break;
            }
            prev = c;
            c = c->next;
            cn++;
        }
        return head;
    }
};