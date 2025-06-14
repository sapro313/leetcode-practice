class Solution {
public:
    int minMaxDifference(int num) {
       stack<int>s1;
       queue<int>s2;
       int temp1=INT_MIN;
       int temp2=INT_MIN;
        int max1=0;
         int min1=0;
         int num1=num;
          while(num1){

            s1.push(num1%10);
            num1=num1/10;
          }
         bool first_val=true;
          while(!s1.empty()){
              int val=s1.top();
              s1.pop();
              s2.push(val);
               if(val!=9&&first_val){
                temp1=val;
                first_val=false;
               }
          if(val==temp1){
            val=9;

          }
          max1=max1*10+val;

            
          }
          bool second_val=true;
          while(!s2.empty()){
            int val=s2.front();
             s2.pop();
             if(val!=0&&second_val){

                temp2=val;
                second_val=false;
             }
             if(temp2==val){
                val=0;
             }
             min1=min1*10+val;



          }
          return max1-min1;
      
      
       

  
        
    }
};
