class Solution {
public:
  bool palin(string ans){
   int n=ans.size()-1;
   int i=0;
    while(i<n){
        if(ans[i]!=ans[n]){
            return false;
        }
        i++;
…           }

        }
        return palin(ans);
        
    }
};
