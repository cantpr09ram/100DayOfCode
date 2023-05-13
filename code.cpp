#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cmp(pair<int,int>a,pair<int,int>b){
    if(a.first!=b.first)return a.first>b.first;
    else return a.second<b.second;
}
int main(void){
    int n, m;
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //========================== 
    cin>>n;
    int a[2*n];
    for(int i=0; i<2*n; i++) cin>>a[i];
    
    cin>>m;
    int b[2*m];
    for(int i=0; i<2*m; i++) cin>>b[i];
    vector <pair<int, int>> ans;

    for(int i=0; i<2*n; i+=2){
        ans.push_back(make_pair(a[i], a[i+1]));
    }
    
    for(int i=0; i<2*m; i+=2){
        bool x=false;
        for(int j=0; j<ans.size(); j++){
            if(b[i] == ans[j].first){
                x = true;
                ans[j].second += b[i+1];
            }
        }
        if(!x){
            ans.push_back(make_pair(b[i], b[i+1]));
        }
    }
    sort(ans.begin(), ans.end(), cmp);
    int c = 0;
    for(int j=0; j<ans.size(); j++){
        if(ans[j].second != 0){
            cout<<ans[j].first<<":"<<ans[j].second<<endl;
            c += 1;
        }
    }
    if(c == 0) cout<<"NULL!";

    return 0;
}