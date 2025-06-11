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
    int getDecimalValue(ListNode* head) {

        ListNode*head2=head;
        int ans=0;
        while(head2){
            ans=ans+1;
           head2=head2->next;

        }
        head2=head;
        int ans1=0;
       while(head2){

         ans1+=head2->val*pow(2,ans-1);
         ans=ans-1;
        head2=head2->next;
       }
       
        return ans1;

    }
};
