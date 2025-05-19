class Solution {
public:
    string triangleType(vector<int>& nums) {
        int sum=0;
         for(int i=0;i<nums.size();i++){
            sum+=nums[i];
         }

         for(int i=0;i<nums.size();i++){

        if(nums[i]>=sum-nums[i]){
            return "none";
        }

         }
         unordered_map<int,int>mp;
         for(auto it:nums){
            mp[it]++;

         }
         for(auto it:mp){
            if(it.second==3){
                return "equilateral";
            }
            else if(it.second==2){
                return "isosceles";
            }
         }
   return "scalene";
        
    }
};

