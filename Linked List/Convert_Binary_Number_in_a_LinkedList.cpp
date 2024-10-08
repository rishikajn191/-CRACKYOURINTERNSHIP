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
//----------------------------------------Solution 1----------------------------------------
class Solution {
public:
    int length(ListNode* head){
        int len=0;
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
    int getDecimalValue(ListNode* head) {
        int len=length(head);
        len=len-1;
        int ans=0;
        while(head!=NULL){
            ans=ans+(head->val * pow(2,len));
            head=head->next;
            len--;
        }
        return ans;
    }
};


//----------------------------------------Solution 2----------------------------------------
// class Solution {
// public:
//     int getDecimalValue(ListNode* head) {
//         int ans=0;
//         while(head!=NULL){
//             ans=(ans*2)+head->val;
//             head=head->next;
//         }
//         return ans;
//     }
// };
