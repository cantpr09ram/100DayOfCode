#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x0, y0, l0, r, ans = 0;
    cin>>x0>>y0>>l0>>r;
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        double xi, yi, li, d;
        cin>>xi>>yi>>li;
        d = sqrt(pow(x0-xi, 2)+pow(y0-yi, 2));
        if(d<=r and li<=l0) ans++;
    }
    cout<<ans;
    return 0;
}