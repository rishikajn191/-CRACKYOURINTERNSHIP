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
    ListNode* insertEnd(ListNode* root, int item){
        ListNode* temp = new ListNode(item);
        if (root == NULL)
            return temp;
  
        ListNode* last = root;
        while (last->next != NULL) {
            last = last->next;
        }
  
        last->next = temp;
        return root;
    }

    ListNode* arrayToList(vector<int> &arr){
        ListNode* root = NULL;
        for (int i = 0; i < arr.size(); i++) {
            root = insertEnd(root, arr[i]);
        }
        return root;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2!=NULL)
            return list2;
        if(list1!=NULL && list2==NULL)
            return list1;
        if(list1==NULL && list2==NULL)
            return list1;
        ListNode* p=list1;
        ListNode* q=list2;
        vector<int> arr;
        while(p!=NULL){
            arr.push_back(p->val);
            p=p->next;
        }
        while(q!=NULL){
            arr.push_back(q->val);
            q=q->next;
        }
        sort(arr.begin(),arr.end());
        return arrayToList(arr);
    }
};
