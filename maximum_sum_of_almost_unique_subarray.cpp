class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long int ans=0;
        unordered_map<int,int>mp;
       long long int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            mp[nums[i]]++;

     



        }
        if(mp.size()>=m){
            ans=max(ans,sum);
        }
        int j=k;
        int i=0;
        while(j<nums.size()){
            sum+=nums[j];
            sum-=nums[i];
      
      
            mp[nums[j]]++;
            mp[nums[i]]--;
          if(mp[nums[i]]==0)
          mp.erase(nums[i]);
        
          if(mp.size()>=m){
            ans=max(ans,sum);
          }
          

       



             i++;
            j++;
        }
        return ans;
        

    }
};
