struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int val) : val(val), next(nullptr) {}
    ListNode(int val, ListNode* next) : val(val), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int v1, v2, carry, sum = 0;
        ListNode* head = new ListNode();
        ListNode* tail = head;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            v1 = (l1 != nullptr) ? l1->val : 0;
            v2 = (l2 != nullptr) ? l2->val : 0;
            
            sum = v1 + v2 + carry;
            carry = sum / 10;
            ListNode* digit = new ListNode(sum % 10);
            tail->next = digit;

            tail = tail->next;
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        return head->next;
    }
};
