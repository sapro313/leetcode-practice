class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=(n*(n+1)/2);
       for(int i=1;i<=n;i++){
          if(i%m){
            num1+=i;
          }
          
       }
      
      num2=num2-num1; 
           
        

       return num1-num2;
        
    }
};
