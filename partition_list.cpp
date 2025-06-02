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
        
   
 
 vector<int>v1;
 vector<int>v2;
 vector<int>v3;
 ListNode*head2=new ListNode(0);
 ListNode*iter=head;


 while(iter){
   if(iter->val<x){
 v1.emplace_back(iter->val);
 
 


   }
iter=iter->next;


 }
 iter=head;

   while(iter){
    if(iter->val>x){
        v2.emplace_back(iter->val);
    }
    if(iter->val==x)
    break;

    iter=iter->next;

 



   }

  while(iter){
    if(iter->val>=x)
   v3.emplace_back(iter->val);
   iter=iter->next;



  }



  ListNode*iter3=head2;
  
  for(auto it:v1){


    iter3->next=new ListNode(it);
   
   
    iter3=iter3->next;
  }
 for(auto it:v2){

iter3->next=new ListNode(it);
iter3=iter3->next;

 }
 for(auto it:v3){


    iter3->next=new ListNode(it);
    iter3=iter3->next;
 }


return head2->next;
   
        
    }
};
