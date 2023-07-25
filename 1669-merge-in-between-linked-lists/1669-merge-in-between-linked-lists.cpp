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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
         int c1 = 1;
      int c2 = 0;
        ListNode *curr1 = list1;
      while(c1 != a){
          c1++;
          curr1 = curr1->next;
      }
      ListNode* curr2 = list1;
        while(curr2->val != b)
            curr2 = curr2->next;
        
      while(list2 != NULL){
       cout<<curr1->val<<" "; 
       curr1->next = list2;
       list2 = list2->next;
       curr1 = curr1->next;
      }
        curr1->next = curr2->next;
        return list1;
    }
};