class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>v1;
        
        for(int i=0;i<s.size();i+=k){
            int j=i;
            string ans="";
             
            while(j<i+k){
              if(j>=s.size()){
                break;
              }
               
             ans+=s[j];
             j++;


            }
            v1.emplace_back(ans);

     

        }

        if(v1[v1.size()-1].size()<k){
            
            while(v1[v1.size()-1].size()<k){
                v1[v1.size()-1]+=fill;
            }

        }
        return v1;
    }
};
