#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, l, r, ans, w;
    cin>>w;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    l = 0;
    r = n-1;
    while(l < r){
        if(a[r] + a[l] <= w){
            l++;
            r--;
        }else{
            r--;
        }
        ans++;
    }
    if(l == r){
        ans++;
    }
    cout<<ans;
}