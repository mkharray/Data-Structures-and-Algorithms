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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr = head;
        ListNode *prev = new ListNode();
        prev = curr;
        if(head == NULL || head->next == NULL)
            return head;
        curr = curr->next;
        while(curr != NULL){
            if(prev->val == curr->val){
                curr = curr->next;
                if(curr == NULL)
                    prev->next = curr;
            }
            else{
                prev->next = curr;
                ListNode *temp = new ListNode();
                temp = curr;
                curr=curr->next;
                prev = temp;
            }
        }
        return head;
    }
};