#include <iostream>
using namespace std;

int main(void) {
     int r, c, t;
    //-------
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-------
    cin>>r>>c>>t;
    int seat[r][c] = {0};
    int rshift = (t-1)/2;
    int cshift = t/2;
    int id = 0;
    for (int i = 0; i <r; i++){
        for (int j= 0; j <c; j++){
            seat[(i+rshift)%r][(j+cshift)%c] = ++id;
        }
    }
    

    for (int i = 0; i < r; i++){
        for (int j= 0; j < c; j++){
            cout<<seat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}