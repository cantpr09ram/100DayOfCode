#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m, n, d;
    cin>>m>>n>>d;

    bool f = false;
    for(int i=0; i<d/n +1; i++){
        if((d - n*i)%m == 0) f = true;
    }

    if(f) cout<<"YES";
    else cout<<"NO";

}