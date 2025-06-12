class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int ans=abs(nums[0]-nums[j]);
        j=i+1;
        while(j<nums.size()){
        ans=max(ans,abs(nums[i]-nums[j]));
        i++;
        j++;


        }
        return ans;
        
    }
};
