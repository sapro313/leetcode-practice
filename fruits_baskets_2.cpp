class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {

int left=0;
int ans=0;
unordered_set<int>s;

for(int i=0;i<fruits.size();i++){
    
    int allocate=0;
    bool is_alloc=false;
    for(int j=left;j<baskets.size();j++){
              allocate=j;
             if(baskets[j]>=fruits[i]){
                      if(s.find(j)==s.end()){
                      s.insert(j);
                      is_alloc=true;
                      break;
                      }
             }
       



    }
    if(s.find(allocate)==s.end()||!is_alloc){
        ans++;
    }
}

  
  
       return ans; 
    }
};
