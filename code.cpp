#include <iostream>
using namespace std;

int main(void) {
    int r, c;
    //-------
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-------
    cin>>r>>c;
    int a[r][c] = {0}, b[r][c] = {0};
    for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            cin>>b[i][j];
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            int sum = 0;
            for(int k=0;k<c;k++) sum += b[i][k];
            for(int k=0;k<r;k++) sum += b[k][j];
            sum -= b[i][j];
            cout<<(sum+a[i][j])%2<<" ";
        }
        cout<<endl;
    }
    return 0;
}