#include <iostream> 
using namespace std;
int ans = 1;
void dfs(int n){
    for(int i=1; i<=n/2; i++){
        ans++;
        dfs(i);
    }
}
int main(void){
    int n;
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    cin>>n;
    dfs(n);
    cout<<ans;
    return 0;
}