class Solution {
public:
    int lenCal(ListNode* head) {
        int c = 0;
        while (head != NULL) {
            c++;
            head = head->next;
        }
        return c;
    }

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int m = lenCal(headA);
        int n = lenCal(headB);
        if (n < m)
        {
            ListNode* temp = headA;
            headA = headB;
            headB = temp;
        }
        // Just so the bigger LL is B

        int diff = abs(n - m);
        for (int i = 0; i < diff; i++) {
            headB = headB->next;
            cout<<headB->val;        
        } // Same starting index for both LL

        while (headA != NULL && headB != NULL) {
            if (headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};
