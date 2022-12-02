#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int ans = 0, n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i] == 0){
            if(i == 0){
                ans += a[1];
            }else if(i == n-1){
                ans += a[n-2];
            }else{
                if(a[i-1] > a[i+1]){
                    ans += a[i+1];
                }else{
                    ans += a[i-1];
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
//g595