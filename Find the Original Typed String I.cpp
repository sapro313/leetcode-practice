class Solution {
public:
    int possibleStringCount(string word) {
        int count=0;
        unordered_map<char,int>mp;
     
     for(int i=0;i<word.size()-1;i++){

     if(word[i]==word[i+1]){
        mp[word[i]]++;
     }

     }
     for(auto it:mp){

        if(it.second){
            count+=it.second;
        }
     }
     return count+1;


    }
};
