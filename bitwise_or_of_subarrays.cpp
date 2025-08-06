#include <vector>
#include <unordered_set>

class Solution {
public:
    int subarrayBitwiseORs(std::vector<int>& arr) {
       unordered_set<int>curr;
       unordered_set<int>ans;
    for(auto it:arr){
        unordered_set<int>next;
…
};
            
