class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
         while(j<nums.size()){
         ans+=min(nums[i],nums[j]);
        

            j+=2;
            i+=2;
         }
         return ans;
       
        
    }
};
