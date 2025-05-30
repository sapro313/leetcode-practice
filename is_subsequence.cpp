class Solution {
public:


   bool generate(string s, string t,int i,string ans){
     if(i==t.size()){
        if(ans==s){
            return true;
        }
        return false;
…
        return generate(s,t,0,"");
        
    }
};
