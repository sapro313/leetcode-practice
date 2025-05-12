#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
int k;
 cin>>k;
 int b[n-k+1];
 int l=0;
 int r=k-1;
 int val=INT_MIN;
 int count=0;
  while(r<n){
      int temp=l;
      while(temp<=r){
          val=max(arr[temp],val);
          
          temp++;
      }
      b[count]=val;
       count++;
      
      val=INT_MIN;
      
      l++;
      r++;
  }
  for(int i=0;i<n-k+1;i++){
      cout<<b[i];
  }
}
  
