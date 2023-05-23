#include <iostream>
#include <algorithm>
using namespace std;
void wash(int a[], int n){
    int b[n];
    for(int i=0;i<n;i+=2){
        b[i] = a[i/2];
        b[i+1] = a[n/2 + i/2];
    }
    for(int i=0;i<n;i++){
        a[i] = b[i];
    }
}
int main() {
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    int n, m;
    cin>>n>>m;
    int cards[n];
    for(int i=0;i<n;i++){
        cin>>cards[i];
    }

    for(int i=0;i<m;i++){
        wash(cards, n);
    }

    for(int i=0;i<n;i++){
        cout<<cards[i]<<" ";
    }
    return 0;
}