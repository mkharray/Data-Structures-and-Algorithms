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
    ListNode* rotateOnce(ListNode*& head){
        ListNode *dummy = head;
        while(dummy->next->next != NULL){
            dummy = dummy->next;
        }
        ListNode* newnode = new ListNode(dummy->next->val);
        newnode->next = head;
        dummy->next = NULL;
        return newnode;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *node = head;
        int l = 0;
        while(node != NULL){
            node= node->next;
            ++l;
        }
        if(l < 2)
            return head;
        k = k % l;
        while(k > 0){
            head = rotateOnce(head);
            k--;
        }
        return head;
    }
};