#include<iostream>
using namespace std;
int main(){
    int k, w, s, e, price = 0;
    cin>>k>>w>>s>>e;
    if(k > 2) price += 20 + (k-2)*5;
    else price += 20;

    price += w/2 * 5;

    for(int i=s; i<=e; i++){
        if(i==18 && e>=19){
            price += 185;
        }else if(i==19 && e>=20){
            price += 195;
        }else if(i==20 && e>=21){
            price += 205;
        }else if(i==21 && e>=22){
            price += 215;
        }else if(i==22 && e>=23){
            price += 225;
        }
    }
    cout<<price;
    return 0;
}
