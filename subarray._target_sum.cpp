#include <iostream>
using namespace std;

int main()
{
  cout<<"enter the array size";
  int n;
   cin>>n;
   int target;
   cout<<"enter the target";
   cin>>target;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
   
   for(int i=0;i<n;i++){
       int val=0;
       
       for(int j=i;j<n;j++){
           val+=arr[j];
           if(val==target){
               for(int x=i;x<=j;x++){
                   cout<<arr[x]<<" ";
               }
                cout<<endl;
               
           }
          
           
           
       }
   }

    return 0;
}
