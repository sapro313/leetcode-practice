class Solution {
public:
   
int maxDistance(string s, int k){
   int north,south,east,west;
  north=0;
  south=0;
  east=0;
  west=0;
  int ans=INT_MIN;
for(int i=0;i<s.size();i++){

 if(s[i]=='N')
 north++;
 if(s[i]=='S')
 south++;
 if(s[i]=='E')
 east++;
 if(s[i]=='W')
 west++;
  
  int currman= abs(north-south)+abs(east-west);
  int steps=i+1;
  int wasted=abs(currman-steps);
  int extra =0;
   if(wasted){

   extra=min(2*k,wasted);


   }

   int finalcurr=extra+currman;
   ans=max(ans,finalcurr);








}





return ans;

}
 



    
};
