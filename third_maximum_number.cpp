class Solution {
public:
    int thirdMax(vector<int>& nums) {
       
       
  sort(nums.begin(),nums.end());
  reverse(nums.begin(),nums.end());
  unordered_set<int>s1;
  int ans=0;
 int j=1;
 for(auto it:nums){
if(s1.find(it)==s1.end()){


if(j==1||j==3){
ans=it;
}
    s1.insert(it);
    j++;
}
else{
  
  
}



 }
 return ans;
 
  
    }
};
