#include <iostream>
using namespace std;
int main() {
    cout.sync_with_stdio(false);
    cin.tie(0);
    long long a, b;
    while(cin>>a){
        b = a/2 +1;
        //cout<<b<<" ";
        cout<<(b+1)*b/2<<"\n";
    }
    return 0;
}