
#include <bits/stdc++.h>
using namespace std;
int main(){
    string args1,args2;
    cin>>args1;
    cin>>args2;
    map<char,int>m1;
    bool is_true=true;
    if(args1.size()!=args2.size()){
        
        cout<<"false";
        is_true=false;
    }
    else{
        for(auto it:args1){
            m1[it]++;
        }
        for(auto it2:args2){
            if(m1.find(it2)==m1.end()){
                cout<<"false";
                is_true=false;
                break;
            }
            else{
                m1[it2]--;
            }
           
        }
        
      
    }
    for(auto it:m1){
        if(it.second!=0){
            cout<<"false";
            is_true=false;
        }
    }
    if(is_true){
        cout<<"true";
    }
    

    

    
    

}

