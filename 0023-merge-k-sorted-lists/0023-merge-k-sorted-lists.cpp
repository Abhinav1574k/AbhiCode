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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        ListNode* t1 = list1;
        ListNode* t2 = list2;

        while(t1 && t2){
            if(t1->val < t2->val){
                temp->next = t1;
                t1 = t1->next;
            }else{
                temp->next = t2;
                t2 = t2->next;
            }
            temp = temp->next;
        }

        temp->next = t1 ? t1 : t2; 

        return dummy->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n == 0){
            return NULL;
        }

        while(n > 1){
            for(int i = 0; i < n/ 2; i++){
                lists[i] = mergeTwoLists(lists[i], lists[n - 1 - i]);
            }
            n = (n + 1) / 2;
        }
        return lists[0];
    }
};