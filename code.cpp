#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
    if (a.first[8]==b.first[8]){
        if (a.first[0] != b.first[0]){
            return a.first[0]<b.first[0];
        }else{
            return a.second < b.second;
        }
    } else {
        return a.first[8]<b.first[8];
    }
}

int main() {
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    int n;
    vector <pair<string, int>> names;
    cin>>n;
    string students[n];
    for(int i=0;i<n;i++){
        string tmp1;
        cin>>tmp1>>students[i];
        pair<string, int>tmp;
        tmp = make_pair(tmp1, i);
        names.push_back(tmp);
    }
    sort(names.begin(), names.end(), cmp);

    for(int i=0;i<n;i++){
        cout<<names[i].first[8]<<": "<<students[names[i].second]<<endl;
    }
    return 0;
}