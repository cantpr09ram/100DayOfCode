#include<iostream>
using namespace std;
int main(){
    int a[3], b[3], ans = 1;
    for(int i=0;i<3;i++){
        cin>>a[i]>>b[i];
    }
    while(true){
        if(ans%a[0]==b[0] && ans%a[1]==b[1] && ans%a[2]==b[2]){
            break;
        }else{
            ans++;
        }
    }
    cout<<ans;
}