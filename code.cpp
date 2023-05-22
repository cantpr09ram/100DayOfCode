#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int ,int>a, pair<int, int>b){
    return a.first<b.first;
}

int main() {
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    vector <pair<int, int>> a;
    int n, tmp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(!a.empty()) {
            for (int j=0;j<a.size();j++) {
                if(a[j].first == tmp) {
                    a[j].second+=1;
                    break;
                }else if(j == a.size()-1){
                    pair<int, int> x = {tmp, 1};
                    a.push_back(x);
                    break;
                }
            }
        }else{
            pair<int, int> x = {tmp, 1};
            a.push_back(x);
        }
    }
    sort(a.begin(),a.end(),cmp);

    for (int j=0;j<a.size();j++) {
        cout<<a[j].first<<" "<<a[j].second<<endl;        
    }

    return 0;
}