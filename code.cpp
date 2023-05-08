#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int cmp(pair<int, int>a, pair<int, int>b){
    if(a.first == b.first){
        return a.second < b.second;
    }else{
        return a.first > b.first;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string n;
    int num[10] = {0};
    vector <pair<int, int>> ans;
    cin>>n;
    for(int i=0;i<n.length();i++){
        num[n[i]-'0'] += 1;
    }

    for(int i=0; i<=9;i++){
        ans.push_back(make_pair(num[i], i));
    }
    sort(ans.begin(), ans.end(), cmp);

    for(int i=0; i<=9;i++){
        if(ans[i].first >0){
            cout<<ans[i].second<<" ";
        }
    }
    return 0;
}