#include<iostream>
#include<string>
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
        }else if(k == 1 && n-55 >= 0){
            n -= 55;
            k = 0;
        }else{
            break;
        }
        cout<<i<<": Wayne "<<(k ?"eats an Apple pie":"drinks a Corn soup")<<", and now he "<<(n>0 ? "has "+to_string(n)+(n>1 ? " dollars.":" dollar.") : "doesn't have money.")<<endl;
        i += m;
    }
    }
    return 0;
}
