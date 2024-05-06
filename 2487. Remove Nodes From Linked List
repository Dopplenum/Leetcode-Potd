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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp=head;
        if(temp==NULL){
            return NULL;
        }
        temp->next=removeNodes(temp->next);
        if(temp->next && temp->val<temp->next->val){
            return temp->next;
        }
        return temp;
    }
};
