#include <iostream> 
using namespace std;

int main(void){
    int n;
    int arr[100] = {0};
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //========================== 
    cin>>n;
    for(int i=0; i<n;i++){
        int a;
        cin>>a;
        a = a%1000;
        a = a/10;
        arr[a] += 1;
        
    }
    for(int i=0;i<100;i++){
        if(arr[i]>0) cout<<i<<" "<<arr[i]<<endl;
    }
    return 0;
}