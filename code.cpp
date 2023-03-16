#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m,x;
    cin>>n>>m;
    vector<int>S(n+1,-1),T(n+1,-1),idx,times(n+1,0);
    for(int i=1;i<=n;i++) cin>>S[i];
    for(int i=1;i<=n;i++) cin>>T[i];
    for(int i=0;i<n;i++) cin>>x, idx.push_back(x);

    while (idx.size() > 1){
        vector<int>winner,loser;
        for(int i=0;i<(int)idx.size();i+=2){
            int player1,player2;
            if(i+1 == idx.size()){
                winner.push_back(idx[i]);
                continue;
            }
            else{
                player1=idx[i];
                player2=idx[i+1];
            }
            long long a=S[player1], b=T[player1];
            long long c=S[player2], d=T[player2];
            if(a*b >= c*d){
                winner.push_back(player1);
                S[player1] = a+(c*d)/(2*b);
                T[player1] = b+(c*d)/(2*a);
                times[player2]++;
                if(times[player2] < m)
                    loser.push_back(player2);
                S[player2] = c+(c/2);
                T[player2] = d+(d/2);
            }else{
                winner.push_back(player2);
                S[player2] = c+(a*b)/(2*d);
                T[player2] = d+(a*b)/(2*c);
                times[player1]++;
                if(times[player1] < m)
                    loser.push_back(player1);
                S[player1] = a+(a/2);
                T[player1] = b+(b/2);
            }
        }
        idx.clear();
        for(int i: winner) idx.push_back(i);
        for(int i : loser) idx.push_back(i);
    }
    cout<<idx[0];
    return 0;
}
