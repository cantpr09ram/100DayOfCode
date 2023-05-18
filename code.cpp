#include <iostream>
#include <vector>
#include <algorithm> //for sort()
using namespace std;
int main(void){
    int n, d, s, t;
    vector<pair<int, int>> course[6]; //依題意 [0] 不用
    int count = 0, time;
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    cin >> n;
    while(n--){
        cin >> d >> s >> t;
        course[d].push_back({t, s}); //結束 vs. 開始
    }
    //Greedy (Activity Selection Problem)
    for(int i=1; i<=5; i++) sort(course[i].begin(), course[i].end());

    for(int i=1; i<=5; i++){
        if(course[i].size() == 0) continue;
        count++;
        time = course[i][0].first;
        for(int j=1; j<course[i].size(); j++){
            if(course[i][j].second >= time){
                count++;
                time = course[i][j].first;
            }
        }
    } 
    cout << count; 
    return 0;
}
