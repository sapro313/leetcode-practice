class Solution {
public:

  void finder(vector<string>&v1,string ans,int n,int open , int close){

    if(ans.size()==n){
        if(open ==close)
        v1.emplace_back(ans);
        return;
    }
…        vector<string>v1;
        finder(v1,ans,2*n,1,0);
        return v1;

    }
};
