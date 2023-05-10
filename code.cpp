#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    //-------
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-------
    int a;
    cin >> a ;
    int b[a][a],c[4][a/2][a/2],d[4];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin >> b[i][j] ;
        }
    }

    for(int i=1;i<a;i+=2){
        for(int j=1;j<a;j+=2){
            cout << max(b[i][j],max(b[i-1][j],max(b[i-1][j-1],b[i][j-1]))) << ' ' ;
        }
        cout << endl ;
    }

    return 0;
}