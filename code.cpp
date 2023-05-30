#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long x;
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    while(cin>>x){
        long long sum = 0;
        for(int i=2; i<=sqrt(x);i++){
            while(x%i == 0){
                sum += i;
                //cout<<i;
                x /= i;
            }
        }
        if(x != 1){
            sum += x;
        }
        cout<<sum<<endl;
    }
    return 0;
}
    