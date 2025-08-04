class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int val=0;
        unordered_map<int,int>mp;
        int l=0;
        int ans=INT_MIN;
        for(int i=0;i<fruits.size();i++){
       mp[fruits[i]]++;
       val++;
       if(mp.size()>2){
        int j=l;
           while(mp.size()>2){
              val--;
             mp[fruits[j]]--;
           
             if(mp[fruits[j]]==0){
                mp.erase(fruits[j]);
            
             }
             j++;

           }
           l=j;

       }
        
        ans=max(ans,val);

        }
        return ans;
    }
};
