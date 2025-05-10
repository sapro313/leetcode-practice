
#include <bits/stdc++.h>

using namespace std;
int main(){
    cout<<"enter the integers from n to m";
    int n,m;
    cin>>n;
    cin>>m;
    int sum=0;

    for(int i=n;i<=m;i++){
sum+=i*i*i;
        
    }
    cout<<"the summation of cubes is "<<sum;
}
