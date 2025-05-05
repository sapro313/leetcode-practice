#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int max1=arr[0];
int count=1;
for(int i=1;i<n;i++){
if(arr[i]>max1){
count++;
}
max1=max(max1,arr[i]);
}
count<<"the maximum count is"<<count;

}




















