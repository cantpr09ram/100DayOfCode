#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int x, y, ans_x, ans_y, a, b, n;
    double ans = 2500000000000;
    cin>>x>>y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        //cout<<sqrt(pow(x-a,2)+pow(y-b,2))<<endl;
        if(ans > sqrt((x-a)*(x-a)+(y-b)*(y-b))){
            ans = sqrt((x-a)*(x-a)+(y-b)*(y-b));
            ans_x = a; 
            ans_y = b;
        }
    }
    cout<<ans_x<<" "<<ans_y;
    return 0;
}