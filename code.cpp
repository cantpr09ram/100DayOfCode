#include<iostream>
using namespace std;
long long gcd(long long x, long long y){
    while ((x %= y) && (y %= x));
    return x + y;
}
int main(){
    long long x0, y0;
    cin>>x0>>y0;
    if(x0 == y0){
        cout<<1;
    }else{
        long long n = x0*y0;
        long long ans = 0;
        for (long long p = x0; p*p < n; p++){
            if (n % p == 0 && gcd(p, n/p) == x0){
                //是最小公倍數 && 最大公因數 = x0
                ans += 2;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}