#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, best = 0, worst = 0;
    int num[20] = {0};
    cin>>a;
    for(int i =0;i<a;i++){
        cin>>num[i];
    }
    sort(num,num+20,greater<int>());
    for(int i =0;i<a;i++){
        if(a-i-1 == 20-a){
            cout<<num[a-i-1];
        }else{
            cout<<num[a-i-1]<<" ";
        }
    }
    cout<<endl;
    for(int i =0;i<a;i++){
        if((num[a-i-1] > 60)&&(i>0)){
            cout<<num[a-i]<<endl;
            best = 1;
        }
    }
    if(best)
    return 0;
}
//i399