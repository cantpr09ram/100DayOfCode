#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int r, c, k, m;
    vector <vector <int>> map;
    int dir[4][2] = {{0,-1},{-1,0},{0,1},{1,0}};//down, left, top, right
    cin>>r>>c>>k>>m;

    for(int i=0;i<r;i++) {
        vector<int> temp;
        for(int j=0;j<c;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        map.push_back(temp);
    }

    for(int w=0;w<m;w++){
        int val [55][55] = {0};
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++){
                // start moving!
                if(map[i][j] != -1) {
                    int out = map[i][j]/k;
                    for(int s=0;s<4;s++) {
                        int x = i+dir[s][0], y = j+dir[s][1]; 
                        if(x>=0 && x<r && y>=0 && y<c && map[x][y]!=-1) {
                            //cout<<i<<j<<endl;
                            val[x][y] += out;
                            val[i][j] -= out;
                        }
                    }
                }
            }
        }
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++){
                map[i][j] += val[i][j];
            }
        }
    }
    /*
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++){
          cout<<map[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    int max_people=0, min_people=1e9;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++){
            if(map[i][j]==-1) continue;
            max_people = max(max_people,map[i][j]);
            min_people = min(min_people,map[i][j]);
        }
    }
    cout<<min_people<<endl;
    cout<<max_people;
    return 0;
}