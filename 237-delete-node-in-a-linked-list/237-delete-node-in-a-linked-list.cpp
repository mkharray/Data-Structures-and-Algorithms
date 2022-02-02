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
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
        
        
        /* e.g- 4->5->9      todelnode = 5
         so first we change the value of todelnode to its next
         then we simply change todelnext's next(pointer) to next's next*/
    }
};