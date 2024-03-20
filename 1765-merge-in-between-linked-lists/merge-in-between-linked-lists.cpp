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
        int c = 1;
        ListNode* head = list1;

        while(c != a){
            head = head->next;
            c++;
        }
        
        ListNode* temp = head->next;
        head->next = list2;

        while(head->next != NULL )
        head = head->next;

        while(c != (b+1)){
            temp = temp->next;
            c++;
        }
        head->next = temp;

        return list1;
    }
};