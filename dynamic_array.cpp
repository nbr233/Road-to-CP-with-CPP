#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.pop_back();
    arr.push_back(4);
    arr.pop_back();
    arr.clear();

    for(int i=0 ;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}