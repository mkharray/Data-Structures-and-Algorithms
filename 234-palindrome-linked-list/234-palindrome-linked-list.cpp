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
        vector<int>vv;
        
        vector<int>v;
        ListNode* curr = head;
        
        while(curr != NULL){
       
        v.push_back(curr->val);
             curr=curr->next;
        }
        
        curr = head;
        reverse(v.begin(),v.end());
        for(int i = 0 ; i < v.size()/2 ;i++)
        {
            cout<<v[i]<<" "<<curr->val<<endl;
        if(curr->val != v[i])
            return false;
            
            curr=curr->next;
        }
           return true;
    }
};