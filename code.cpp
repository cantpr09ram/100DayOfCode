#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b) {
    if(a.first == b.first){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main() {
	int n, tmpa, tmpb;
    vector<pair<int, int>>arr;
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmpa>>tmpb;
        arr.push_back(make_pair(tmpa, tmpb));
    }
    sort(arr.begin(), arr.end(), cmp);
    for(int i=0;i<n;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }

    return 0;
}
    