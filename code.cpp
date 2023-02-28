#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
int main(){
    cout.sync_with_stdio(false);
    int n,m,k; cin>>n>>m>>k;
    vector<int> flow[n],ANS;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x; cin>>x;
            flow[i].push_back(x);
        }
    }
    for(int i=0;i<k;i++){
        vector<int> router[m],plan(n);
        for(int &p:plan) cin>>p;
        for(int j=0;j<n;j++) 
            router[plan[j]].push_back(j);
        int ans=0;
        for(int from=0;from<m;from++){
            for(int to=0;to<m;to++){
                int someflow = 0;
                for(int j: router[from]) {
                    someflow += flow[j][to];
                }
                if(from == to) {
                    ans += someflow; 
                }else {
                    if(someflow<=1000) ans+=someflow*3;
                    else ans+=3000+(someflow-1000)*2;
                }
            }
        }
        ANS.push_back(ans);
    }
    cout<<*min_element(ANS.begin(),ANS.end())<<"\n";
    return 0;
}