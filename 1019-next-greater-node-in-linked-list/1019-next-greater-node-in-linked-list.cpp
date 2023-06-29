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
    int findgreater(ListNode* node){
        int nodeval = node->val;
        node = node->next;

        while(node != NULL){
            if(node->val > nodeval)
                return node->val;
            node = node->next;

        }
        return 0;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        
        while(head != NULL){
            int x = findgreater(head);
            ans.push_back(x);
            head = head->next;
        }
        return ans;
    }
};