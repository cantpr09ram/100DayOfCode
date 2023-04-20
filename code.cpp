#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, m, k, i = 0;
    cin>>n>>m>>k;
    if((k == 0 && n<32)||(k==1 && n<55)){
        cout<<"Wayne can't eat and drink.";
    }else{
        while(n > 0){
        if(k == 0 && n-32 >= 0){
            n -= 32;
            k = 1;
            if(n>1){
                cout<<i<<": Wayne eats an Apple pie, and now he has "<<n<<" dollars."<<endl;
            }else if(n == 1){
                cout<<i<<": Wayne eats an Apple pie, and now he has "<<n<<" dollar."<<endl;
            }else{
                cout<<i<<": Wayne eats an Apple pie, and now he doesn't have money."<<endl;
            }
        }else if(k == 1 && n-55 >= 0){
            n -= 55;
            k = 0;
            if(n>1){
                cout<<i<<": Wayne drinks a Corn soup, and now he has "<<n<<" dollars."<<endl;
            }else if(n == 1){
                cout<<i<<": Wayne drinks a Corn soup, and now he has "<<n<<" dollar."<<endl;
            }else{
                cout<<i<<": Wayne drinks a Corn soup, and now he doesn't have money."<<endl;
            }
            
        }else{
            break;
        }
        i += m;
    }
    }
    return 0;
}
