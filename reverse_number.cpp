class Solution {
public:
    int reverse(int x) {
       
       if(!x){
        return x;
       }
       bool is_negative=false;
       
       

       long long int num=x;
       long long int ans=0;
        long long int temp1=1;
        long long int temp2=10;
        if(x<0){

            num*=1ll*-1;
            is_negative=true;

        }
         while(num){

         temp1=num%10;
         ans=(1ll)*ans*temp2+temp1;
         num=num/10;



         }
        if(is_negative){


            ans=ans*-1;
        }
        
         long long limit=1ll*pow(-2,31);
         long long limit2=1ll*pow(2,31)-1;
         if(ans<limit||ans>limit2){
            return 0;
         }
         return ans;
       
       
    }
};
