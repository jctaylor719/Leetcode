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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* result = new ListNode();
        ListNode* ptr = result;

        int carry = 0;

        // Until we are at the end of both lists,
        while(l1 != NULL || l2 != NULL || carry) {
            // Add carry to the sum
            int sum = 0 + carry;
            // If we're not at the end of the first list,
            if(l1 != NULL) {
                // Add the value of the current node to the sum
                sum += l1->val;
                // The pointer moves to the next node
                l1 = l1->next;
            }
            // Same thing as above, applied to the second list
            // Adding values to the same sum
            if(l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            // Carry is 1 if sum is over 10, and sum is the remainder
            carry = sum / 10;
            sum = sum % 10;
            // Create a new node for the resulting linked list
            // with the sum value, and move the pointer
            ptr->next = new ListNode(sum);
            ptr = ptr->next;
        }

        // If there is still a carry value,
        if(carry == 1) {
            // Create a new node at the end of the resulting linked list
            ptr->next = new ListNode();
        }

        // Return answer
        return result->next;
        
    }
};
