class Solution {
public:
    char kthCharacter(int k) {
        string ans="a";
        while(ans.size()<k){
       
         string a="";
         for(auto it:ans){
            if(it=='z'){
                a+='a';
            }
            else{
                a+=(it+1);
            }
         }
         ans+=a;

        }
        return ans[k-1];
    }
};
