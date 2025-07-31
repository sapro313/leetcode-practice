class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());

int ans=INT_MAX-1000000;
    for(int i=0;i<nums.size();i++){
        int j=i+1;
        int k=nums.size()-1;
        while(j<k){
          int sum=nums[i]+nums[j]+nums[k];
    if (abs(target - sum) < abs(target - ans)) {
    ans = sum;
}

        if(sum<target){
            
            j++;
        }
      
      
        else{
            k--;
        }


        }
    }
    return ans;
    }
};
