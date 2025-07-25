class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }

        int count=0;
        for(int i=0;i<nums.size();i++){
          if(mp[nums[i]]==1&&nums[i]>=0){
            count+=nums[i];
            mp[nums[i]]--;
          }
          else{
            mp[nums[i]]--;
          }
            
        }
        if(count==0){
           count=INT_MIN;
        for(auto it:nums){
            count=max(count,it);
        }
        }
        return count;
        
    }
};
