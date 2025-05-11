#include<bits/stdc++.h>
using namespace std;
bool is_prime(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
      return false;
        }
    }
    return true;
    
    
}
bool digit_sum(int a){
    
    int sum=0;
     while(a){
         int temp=a%10;
         sum=sum+temp;
         a=a/10;
     }
     return is_prime(sum);
}
bool multiple(int a,int arr[],int n){
    
    for(int i=0;i<n;i++){
        if(arr[i]!=a){
            
            if(arr[i]%a==0){
                return true;
            }        
    }
    
}
return false;
}


int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
       
   }
   int sum=0;
   int val=0;
   for(int i=0;i<n;i++){
       if(is_prime(arr[i])&&digit_sum(arr[i])&&multiple(arr[i],arr,n)){
           sum+=arr[i];
           val=1;
       }
   }
   if(val==0){
       cout<<-1;
   }
   else{
       cout<<sum;
   }
  
    
    return 0;
}
