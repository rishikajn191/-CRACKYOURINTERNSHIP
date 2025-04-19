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
        
        ListNode* head=new ListNode();
        ListNode* store=head;
        ListNode* tmp;
        int sum,carry = 0;

        while(l1!=NULL || l2!=NULL || carry){
            tmp = new ListNode();
            sum = 0;
            if(l1!=NULL){
                sum = sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum = sum +l2->val;
                l2=l2->next;
            }
            sum+=carry;
            tmp->val = sum%10;
            tmp->next = NULL;
            carry = sum/10;
            store->next = tmp;
            store = tmp;
        }
        tmp = NULL;
        store = NULL;
        return head->next;
    }
};
