class Solution {
public:
    int titleToNumber(string columnTitle) {
     
     
        int sum=0;
        int val=26;
       
       for(int i=0;i<columnTitle.size();i++){
        sum*=26;
          sum+=((int)columnTitle[i]-64);


       }
       return sum;

        
    }
};
