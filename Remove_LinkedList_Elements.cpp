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

//----------------------------------------------Solution 1----------------------------------------------
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        //creating new list
        ListNode* newHead = new ListNode(0);
        ListNode* Temp = newHead;

        while(head != NULL){
            if(head-> val != val){
                Temp-> next = new ListNode(head-> val);
                Temp = Temp-> next;
            }
            head = head-> next;
        }
        return newHead-> next;
    }
};



//----------------------------------------------Solution 2----------------------------------------------

// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         ListNode* temp=new ListNode(-1);
//         temp->next= head;
//         ListNode* curr = temp;
//         while(curr->next!=NULL){
//             if(curr->next->val == val)
//                 curr->next=curr->next->next;
//             else
//                 curr=curr->next;
//         }
//         return temp->next;
//     }
// };
