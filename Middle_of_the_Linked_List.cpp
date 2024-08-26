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

//-------------------------------------Solution 1-------------------------------------
//--------------------------------Brute Force Approach--------------------------------
class Solution {
public:
    int length(ListNode* head) {
        int len = 0;
        while (head != NULL) {
            len++;
            head = head->next;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {   
        int len = length(head);
        int ans=len/2;
        int count=0;
        ListNode* temp=head;
        while(count<ans){
            temp=temp->next;
            count++;
        }
        return temp;
    }
};

//-------------------------------------Solution 2-------------------------------------
//---------------------------------Efficient Approach---------------------------------

/* slow pointer moves 1 time whereas fast moves 2 times....
        because of this as slow reaches the middle and at the same time fast reaches the end. So, when we return slow, it returns the middle of the linked list.
*/

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {   
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next;
//             fast=fast->next;
//         }
//         return slow;
//     }
// };
