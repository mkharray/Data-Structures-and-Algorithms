/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*>s;
        ListNode *curr = head;
        while(curr != NULL)
        {
            if(s.find(curr) == s.end())
                s.insert(curr);
            else
                return true;
            
            curr = curr->next;
            }
        
        return false;
    }
};