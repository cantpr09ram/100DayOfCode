#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c;
    int num[9] = {0};
    cin>>a>>b>>c;
    num[a-1] += 1;
    num[b-1] += 1;
    num[c-1] += 1;
    cout<<*max_element(num, num+9);
    for(int i=8;i>=0;i--){
        if(num[i] > 0){
            cout<<" "<<i+1;
        }
    }
    return 0;
}
//i399