#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }

    for(int i=num-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
