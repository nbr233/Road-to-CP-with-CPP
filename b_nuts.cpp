#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,nuts,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nuts;
        if(nuts>10){
            count=count+(nuts-10);
        }
    }
    cout<<count;

}