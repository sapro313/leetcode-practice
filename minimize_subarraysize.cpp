class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int h=0;
        bool is_present=false;
        for(int i=0;i<n;i++){
           sum+=nums[i];
           if(sum>=target){
            is_present=true;
             h=i;
            break;


           }


        }
        if(!is_present){
            return 0;
        }
   int ans=h+1;
   int i=0;
        for(int j=h;j<n;j++){
   if(j!=h){
    sum+=nums[j];
   }
          while(sum>target){
            sum-=nums[i];
              ans=min(ans,j-i+1);
            i++;
          }
          if(sum==target){
            ans=min(ans,j-i+1);
          }




        }

   
   
return ans;


    }
};
