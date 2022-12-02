#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a[3] = {0};
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    for(int i=0;i<3;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    if(a[0]+a[1]<=a[2]){
        cout<<"No";
    }else{
        if(a[0]*a[0]+a[1]*a[1] < a[2]*a[2]) cout<<"Obtuse";
        else if(a[0]*a[0]+a[1]*a[1] >a[2]*a[2]) cout<<"Acute";
        else if(a[0]*a[0]+a[1]*a[1] == a[2]*a[2]) cout<<"Right";
    }
    return 0;
}