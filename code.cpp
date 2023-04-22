#include<iostream>
using namespace std;
int main(){
    int x, r, v, n, p, s;
    cin>>x>>r>>v;
    cin>>n;

    for(int i=0; i<n;i++){
        cin>>p>>s;
        if(abs(x - p) <= r && s<=v){
            x = p;
        }else if(abs(x - p) <= r && s>v){
            if(x > p){
                x += 15;
            }else{
                x -= 15;
            }
        }
        //cout<<x<<endl;
    }
    cout<<x;
    return 0;
}
