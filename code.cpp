#include <iostream>
using namespace std;

int main() {
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    int t, n, m;
    cin >> t;
    while (t--){
        cin >> n >> m;
        int a[144];
        int len=m*n;
        for (int i=0; i<len; i++){
            cin >> a[i];
        }

        bool go=true;

        for (int i=0; i<=len/2; i++){
            if (a[i]!=a[len-1-i]){
                go=false;
                break;
            }
        }
        if (go){
            cout <<"go forward"<<endl;
        }
        else {
            cout <<"keep defending"<<endl;
        }
    }
    return 0;
}
    