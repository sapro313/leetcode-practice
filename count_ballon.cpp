#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cout<<"enter the size of the array";
cin>>n;
char b[n];
unordered_map<char,int>m1;
for(int i=0;i<n;i++){
    cin>>b[i];
     m1[b[i]]++;
    
}


int flag =0;
    
    for(int i=0;i<n;i++){
         if(m1[b[i]]%2==1){
        cout<<b[i];
        flag=1;
        break;
         }
        
    }

 if(flag==0){
    cout<<"all are even ";
}
 
 

    return 0;
}
