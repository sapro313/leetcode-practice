class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        queue<string>q1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                ans=s[i]+ans;
            }
            else if(s[i]==' '&&ans!=""){
                
                q1.push(ans);
                ans="";
            }
            if(i==0&&ans!=""){
                q1.push(ans);
            }
        }
        string ans1="";
        int i=1;
        char space=' ';
        int s2=q1.size();
        while(!q1.empty()){
            string a=q1.front();
            q1.pop();
          
            if(i<s2)
            ans1+=a+space;
            else{
                ans1+=a;
            }
              i++;

        }
        return ans1;
        
    }
};
