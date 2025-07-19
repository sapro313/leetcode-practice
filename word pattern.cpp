class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        unordered_map<string,char>mp2;
        vector<char>v;
        vector<string>v1;
        for(auto it:pattern){
            v.emplace_back(it);
        }
        string ans="";
        for(auto it:s){
            if(it==' '){
                v1.emplace_back(ans);
                ans="";
            }
            else{
                ans+=it;
            }
        }
        v1.emplace_back(ans);

  if(v1.size()!=v.size()){
    return false;
  }
  for(int i=0;i<v1.size();i++){
   if(mp.find(v[i])==mp.end()&&mp2.find(v1[i])==mp2.end()){
    mp[v[i]]=v1[i];
    mp2[v1[i]]=v[i];
   }
   else if(mp[v[i]]!=v1[i]||mp2[v1[i]]!=v[i]){
    return false;
   }


  }
  return true;

    }
};
