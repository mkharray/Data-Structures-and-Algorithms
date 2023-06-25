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
        unordered_set<int>s;
        ListNode* curr = head;
        ListNode* prev = new ListNode();
        prev->next = curr;
        while(curr != NULL){
            if(s.find(curr->val) == s.end() ){
                s.insert(curr->val);
                prev = prev->next;
            }
            else if(curr->next != NULL){ // not the last element
                prev->next = curr->next;
            }
            else{           // The Last Element
                prev->next = NULL;
            }
            curr = curr->next;
    }
        return head;
    }
};