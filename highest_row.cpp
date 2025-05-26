#include<bits/stdc++.h>
using namespace std;
int main(){
    int r, c;
   cin>>r;
   cin>>c;
   int arr[c][r];
   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           cin>>arr[i][j];
       }
   }
   int max_val=INT_MIN;
   int max_ind=-1;
   for(int i=0;i<r;i++){
       auto temp=0;
       for(int j=0;j<c;j++){
           temp+=arr[i][j];

       }
       if(temp>max_val){
           max_val=temp;
           max_ind=i+1;
       }
   }
    
  cout<<max_ind;  
    
    
} 
    
