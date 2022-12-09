#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, a1[10000], a2[10000];
    cin>>n>>m;
    
    for(int i = 0;i<n*2; i+=2){
        
        for(int j = 0;j<m;j++){
            cin>>a1[j];
        }
        for(int j = 0;j<m;j++){
            cin>>a2[j];
        }
        
        int ans = 0;
        int j1 = 0, j2 = 0;
        while(j1 < m && j2 < m){
            if (a1[j1] == a2[j2]){
                j1++; j2++; ans++;
                //cout<<i<<j1<<j2<<endl;
            }else if(a1[j1] > a2[j2]){
              j2++;
            }
            else if(a1[j1] < a2[j2]){
               j1++; 
            } 
        }
        cout<<ans<<endl;
    }
    return 0;
}
/*

d596
d481
a694
a417
*/