#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, ans=1000001, min_wight, min_hight;
    cin>>n;
    long long int wight[n], hight[n];
    for(int i=0;i<n;i++){
        cin>>hight[i];
    }
    for(int i=0;i<n;i++){
        cin>>wight[i];
    }
    for(int i=0;i<n;i++){
        if(wight[i]*hight[i] <= ans){
            ans = wight[i]*hight[i];
            min_hight = hight[i];
            min_wight = wight[i];
        }
    }
    cout<<min_hight<<" "<<min_wight;
    return 0;
}