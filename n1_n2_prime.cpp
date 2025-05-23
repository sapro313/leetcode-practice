#include <bits/stdc++.h>
using namespace std;
bool is_prime(int iter){
     for(int i=2;i*i<iter;i++){
 if(iter%i){
 return false;
   }

 }
return true;
}
int find_prime(int n){
  int count=0;
   int iter=1;
  while(count<n){
if(is_prime(iter)){
count++;
 }
 iter++;
  }
  return iter;
}
int main()
 
   int n1,n2;
 cin>>n1;
cin>>n2;
 int temp1,temp2;
 temp1=find_prime(n1);
 temp2=find_prime(n2);
cout<<temp1*temp2-1;
 return 0;
}























