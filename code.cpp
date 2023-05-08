#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int min, hour, time, station, total, p, n;
    cin>>station;
    cin>>hour>>min;
    pair<int, int> t[station+1];
    t[0].first = hour;
    t[0].second = min;
    total = hour*60+min;
    for(int i=1; i<=station;i++){
        cin>>n;
        total += n;
        t[i].first = (total/60)%24;
        t[i].second = total%60;
    }

    while(cin>>p && p){
        cout<<setfill('0')<< setw(2)<<t[p].first<<':'<< setw(2)<<t[p].second<<'\n';
    }
    return 0;
}
