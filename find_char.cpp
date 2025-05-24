#include<bits/stdc++.h>
using namespace std;





class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

        vector<int>v1;
         for(int i=0;i<words.size();i++){

             for(int j=0;j<words[i].size();j++){
                  if(words[i][j]==x){
                    v1.emplace_back(i);
                      break;
}
}
}
return v1;







…};
