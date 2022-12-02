#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, friends = 0, j, k, a[50000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        if(a[i] != -1){
            j = a[i];
            while(true){
                k = j;
                j = a[j];
                a[k] = -1;
                if(j == i){
                    break;
                }
            }
            friends++;
        }
    }
    cout<<friends;
    return 0;
}