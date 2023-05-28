#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
    return b == 0? a:gcd(b, a%b);
}

int main() {
	int a, b;
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    while(cin>>a>>b){
        cout<<gcd(a,b)<<endl;
    }
    return 0;
}
    