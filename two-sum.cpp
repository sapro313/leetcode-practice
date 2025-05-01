class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
unordered_map<int,int>m1;
vector<int>ans;
for(int i=0;i<nums.size();i++){
int a=nums[i];
int temp=target-a;
if(m1.find(temp)!=m1.end()){
ans.emplace_back(m1[temp]);
ans.emplace_back(i);

}
m1[a]=i;
}

return ans;

    }
};
