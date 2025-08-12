class Solution {
public:
    string removeDuplicateLetters(string s) {
     stack<char>s1;
     unordered_map<char,int>mp;
     for(auto it:s){
        mp[it]++;
     }
     int i=1;
     int n=s.size();
     unordered_set<char>temp;
     for(auto it:s){
     
    
            while(!s1.empty()and mp[s1.top()]>0 and s1.top()>it&&temp.find(it)==temp.end()){
                temp.erase(s1.top());
               s1.pop();

               
            }
            
            if(temp.find(it)==temp.end()){
            s1.push(it);
            temp.insert(it);
            }
            
    mp[it]--;
            

     }
     string ans="";
     while(!s1.empty()){
ans=s1.top()+ans;
s1.pop();

     }
     return ans;

    
        
    }
};
