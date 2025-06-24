class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {


        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<nums.size();i++){

            if(nums[i]==key){
                v2.emplace_back(i);
            }
        }

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<v2.size();j++){
                

                    if(abs(i-v2[j])<=k){
                        v1.emplace_back(i);
                        break;
                    }
                
            }
        }
        return v1;
        
    }
};
