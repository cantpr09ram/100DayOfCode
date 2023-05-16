#include <iostream> 
#include <queue>
#include <algorithm>
using namespace std;
double cmp(pair<double,string>a, pair<double, string>b){
    return a.first > b.first;
}
int main(void){
    int n, tmp, p, l, w, r;;
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    cin>>n;
    pair<double, string> arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].second>>p>>l>>w>>r;
        arr[i].first = (double)p*w*r/l;
        
    }

    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        cout<<arr[i].second<<endl;
    }
    return 0;
}