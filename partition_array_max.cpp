class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
       int i=1;
       int min_val=nums[0];
       int ans=1;
        while(i<nums.size()){
            if(nums[i]-min_val>k){
                ans++;
                min_val=nums[i];
            }



            i++;
        }
        return ans;

    
    
    }
};
