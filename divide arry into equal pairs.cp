class Solution {
public:
    bool divideArray(vector<int>& nums) {

        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int val=nums.size()/2;
        for(auto it:mp){
…        }
        return true;
        
    }
};
