class FindSumPairs {
public:
   unordered_map<int,int>m1;
   unordered_map<int,int>m2;
   unordered_map<int,int>ind;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]++;

        }
        for(int j=0;j<nums2.size();j++){

            m2[nums2[j]]++;
            ind[j]=nums2[j];
        }
        
    }
    
    void add(int index, int val) {
       int x=ind[index];
       ind[index]+=val;
       m2[x]--;
       m2[x+val]++;
      
        
    }
    
    int count(int tot) {
        int count=0;
        for(auto it:m1){

           if(m2.find(tot-it.first)!=m2.end()){
          count+=(it.second*m2[tot-it.first]);

           }

        }
        return count;
        
    }
};

