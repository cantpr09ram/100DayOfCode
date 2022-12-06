#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, sum = 0, ans = 0, prefix, suffix;
    int a1[1000000] = {0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    prefix = a1[0];
    suffix = a1[n-1];
    for (int i = 0,j = n-1;i < n && j >= 0;) {
        if (prefix == suffix) {
            ans += 1;
            prefix += a1[++i];
        } else if (prefix > suffix) {
            suffix += a1[--j];
        } else if (suffix > prefix) {
            prefix += a1[++i];
        }
    }
    cout<<ans;
    return 0;
}
