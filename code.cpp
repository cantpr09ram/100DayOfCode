#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, t;
    while(cin>>n){
        t = 0;
        while(n>1){
            if(n%2 == 0){
                n /= 2;
                t++;
            }else if (n%2 == 1){
                n = n*3 +1;
                t++;
            }
        }
        cout<<t<<endl;
    }
    return 0;
}