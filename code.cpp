#include<iostream>
using namespace std;
int main(){
    int arr[47] = {0};
    int num;
    cin>>num;
    for(int i=0; i<=num+1; i++){
        if(i == 0){
            arr[0] = 0;
        }else if (i == 1){
            arr[1] = 1;
        }else{
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        
    }
    cout<<arr[num]<<":"<<arr[num+1];
    return 0;
}