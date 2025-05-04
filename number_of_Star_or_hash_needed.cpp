#include <bits/stdc++.h>
using namespace std;
int main()
{
   cout<<"enter the input string consisting of * and #";
   string a;
   cin>>a;
   unordered_map<char,int>m1;
   for(int i=0;i<a.size();i++){
       m1[a[i]]++;
       
   }
   cout<<abs(m1['*']-m1['#']);
   

    return 0;
}
