#include <iostream> 
using namespace std;

int main(void){
    int n, e, q;
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //========================== 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>e;
    cin>>q;
    for(int i=0;i<q;i++){
        int b;
        cin>>b;
        for(int j=0; j<n;j++){
            if(a[j] == b){
                swap(e, a[j]);
                e = b;
                continue;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}