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
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL){
            return head;
        }

        ListNode *headSmall = NULL, *headBig = NULL;
        ListNode *tempSmall = NULL, *tempBig = NULL;

        while(head != NULL){
            if(head->val < x){
                if(!headSmall){
                    headSmall = new ListNode(head->val);
                    tempSmall = headSmall;
                }
                else{
                    tempSmall->next = new ListNode(head->val);
                    tempSmall = tempSmall->next;
                }
            }
            else{
                if(!headBig){
                    headBig = new ListNode(head->val);
                    tempBig = headBig;
                }
                else{
                    tempBig->next = new ListNode(head->val);
                    tempBig = tempBig->next;
                }
            }
            head = head->next;
        }

        if(tempSmall != NULL){
            tempSmall->next = headBig;
            return headSmall;
        }
        return headBig;
    }
};