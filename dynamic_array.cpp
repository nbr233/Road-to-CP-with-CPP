#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr;
cout<<"enter array size"<<endl;
    int n;
    cin>>n;
    for(int i=0 ;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

  ;

    for(int i=0 ;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}