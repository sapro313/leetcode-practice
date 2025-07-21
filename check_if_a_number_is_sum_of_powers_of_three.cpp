class Solution {
public:
int find_size(int n){
int i=1;
int x=0;
while(i*3<=n){
    i*=3;
    x++;
}
return x;


}
    bool checkPowersOfThree(int n) {
    
   
   int y=find_size(n);
  
  
  while(y>=0){

    int x=pow(3,y);
    if(n>=x){
         n-=x;
    }
  
  
    y--;


  }
  return(n==0);
  
 
 

        
    }
};
