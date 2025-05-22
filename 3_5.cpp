
#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     for(auto it:arr){
         string temp="";
         if(it%3==0){
             temp+="THREE";
             
            if(it%5==0){
                temp+="FIVE";
                
            }
            cout<<temp<<" ";
             
             
         }
         else if(it%5==0){
             
             temp+="FIVE";
             cout<<temp<<" ";
             
         }
         else{
             cout<<it<< " ";
         }
        
         
         
     }

   
    
    
    
}
