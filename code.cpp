#include<iostream>
using namespace std;
int main(){
    int a[20000];
    int k,ans=0;
    cin>>k;
    a[0]=6;
    a[1]=2;
    a[2]=5;
    a[3]=5;
    a[4]=4;
    a[5]=5;
    a[6]=6;
    a[7]=3;
    a[8]=7;
    a[9]=6;
    for(int i=10;i<=19999;i++){
        int y=i;
        int sum=0;
        while (y!=0){
            sum+=a[y%10];
            y=y/10;
        }
        a[i]=sum;
     }
    for(int A=0;A<=10000;A++){
        for(int B=0;B<=10000;B++){
            if (a[A]+a[B]+a[A+B]+4==k) ans=ans+1;
        }
    }
    cout<<ans;
    return 0;
}