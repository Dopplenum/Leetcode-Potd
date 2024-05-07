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

   int doubledLinkedList(ListNode* head){
    ListNode* temp = head;
    if(head == nullptr){
        return 0;
    }
    int carry = doubledLinkedList(head->next);
    int doubleVal = (temp->val)*2 + carry;
    int remainder = doubleVal%10;
    carry = doubleVal/10;
    temp->val = remainder;
    return carry;
   }


public:
    ListNode* doubleIt(ListNode* head) {
        int final = doubledLinkedList(head);
        if(final>0){
            ListNode * newNode = new ListNode(final, nullptr);
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
};
