class Solution {
public:
void finder(int i,int curr,int val, vector<int>&nums,int&ans){
if(i==nums.size()){
if(curr==val){
    ans++;
}
return;

}
finder(i+1,curr|nums[i],val,nums,ans);
finder(i+1,curr,val,nums,ans);

}
    int countMaxOrSubsets(vector<int>& nums) {
        
        int val=0;
        for(auto it:nums){
            val=val|it;
        }
        int ans=0;
        finder(0,0,val,nums,ans);
         return ans;
    }
};
