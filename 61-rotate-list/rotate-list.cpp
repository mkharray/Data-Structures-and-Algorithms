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
    ListNode* rotateOnce(ListNode* head){
        ListNode* h = head;

        while(h->next->next != NULL)
        h=h->next;

        h->next->next = head;
        ListNode* newHead = h->next;
        h->next = NULL;

        return newHead;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* newHead = head;
        if(head == NULL || head->next == NULL)
        return head;

        ListNode* dummy = head;
        int c = 0;

        while(dummy != NULL){
            c++;
            dummy = dummy->next;
        }

        k = k%c;
        while(k--){
            newHead = rotateOnce(newHead);
        }
        return newHead;
    }
};