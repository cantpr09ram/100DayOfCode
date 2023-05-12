#include <iostream> 
using namespace std;

int main(void){
    int n;
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //========================== 
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++) cin>>a[i];

    int b = a[n-1], sum=0;

    for(int i=0;i<n;i++){
        if((i+1)%b == 1){
            sum += a[i];
        }
    }
    if(sum%n == 0) cout<<n<<" "<<a[n-1];
    else cout<<sum%n<<" "<<a[sum%n - 1];
    return 0;
}