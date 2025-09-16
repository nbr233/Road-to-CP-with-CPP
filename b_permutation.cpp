#include<bits/stdc++.h>
using namespace std;
int main(){
    size_t n;
    cin>>n;
    set<int> s;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if (s.size()==n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}