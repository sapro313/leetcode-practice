class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
       
   
   unordered_map<int,vector<int>>row;
   unordered_map<int,vector<int>>col;
   int n=grid.size();
   
   for(int i=0;i<n;i++){
        
    for(int j=0;j<n;j++){
    
         row[i].emplace_back(grid[i][j]);

    }
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){

        col[i].emplace_back(grid[j][i]);
    }
   }

map<vector<int>,int>mp;
for(auto it:col){
    mp[it.second]++;
}
  


 int ans=0;
  for(int i=0;i<grid.size();i++){

   
   ans+=mp[row[i]];

  }
  return ans;
   
    }
};
