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
        ListNode *slow = head;
        ListNode *fast = head;
        vector<int>v;
        if(head == NULL || head->next == NULL )
            return true;
        
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            v.push_back(slow->val);
            slow = slow->next;
            
        }
        int i = v.size()-1;
        if(fast != NULL)
        slow = slow->next;
        
        
        while(slow != NULL){
            if(slow->val != v[i])
            return false;
            
        i--;
        slow = slow->next;
            }
        return true;
    }
};