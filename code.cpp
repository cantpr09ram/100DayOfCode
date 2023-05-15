#include <iostream> 
#include <queue>

using namespace std;

int main(void){
    priority_queue<int, vector<int>, greater<int>> arr;
    long long n, ans=0, tmp;
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //========================== 
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        arr.push(tmp);
    }
    while(arr.size() > 1){
        long long a = arr.top();
        arr.pop();
        long long b = arr.top();
        arr.pop();
        arr.push(a+b);
        ans += a+b;
        //cout<<a<<b<<a+b;

    }
    cout<<ans;
    return 0;
}