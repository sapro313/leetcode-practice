


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
                ListNode* reverseBetween(ListNode* head, int left, int right) {
                      
                    
                    if(left==right||!head){
                        return head;
                    }


                    int count=1;
                    auto head2=head;
                    ListNode*prev1=head;
                    while(count!=left){
                   count++;
                   prev1=head2;
                  head2=head2->next;
               

                    }

                    auto prev=head;
                    int count2=1;
                     while(count2<right+1&&prev){


                        prev=prev->next;
                        count2++;
                     }
                       ListNode* prev3=NULL;
                     while(count<=right){
                        prev3=head2->next;
                        head2->next=prev;
                        prev=head2;
                        head2=prev3;


                        count++;

                     }
                     if(left==1){
                        return prev;
                     }
                     prev1->next=prev;
                     return head;



                }
        };
