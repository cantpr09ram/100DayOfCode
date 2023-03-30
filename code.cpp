#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k,q,r;
    cin>>k>>q>>r;
    string step;
    char ans[25][26];
    for(int i=0;i<k;i++){
        cin>>ans[0][i];
    }
    
    
    for(int i=0;i<q;i++){
        for(int j=0;j<k;j++) {
            int x; cin >> x;
            ans[i+1][j] = ans[i][x-1];
            cout<<ans[i][x-1]<<" "<<ans[i+1][j]<<" "<<x;
        }
        cout<<endl;
    }

    for(int i=0;i<q;i++){
        for(int j=0;j<k;j++) {
            cout<<ans[i+1][j];
        }
        cout<<endl;
    }
    /*
    for(int i=1;i<=r;i++){
        for(int j=0;j<q;j++) {
            cout<<ans[j][i];
        }
        cout<<endl;
    }*/
    return 0;
}