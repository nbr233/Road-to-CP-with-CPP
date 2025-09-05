#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {5,4,3,2,1};
    sort(arr,arr+5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int arr2[5] = {1,2,3,4,5};
    sort(arr2,arr2+5);
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;

}
