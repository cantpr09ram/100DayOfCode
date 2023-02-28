#include<iostream>
#include<vector>

using namespace std;
int main(){
    cout.sync_with_stdio(false);
    int n = 0, m = 0;
    int dice[20][3];
    cin>>n>>m;

    for(int i = 0;i<n;i++){
        for(int j=0; j<3;j++){
            dice[i][j] = j+1;
        }
    }

    for(int i = 0;i<m; i++){
       int a, b;
       cin>>a>>b;

        if (a*b >= 0){
            swap(dice[a-1], dice[b-1]);
        }else if (b == -1){
            int top = dice[a-1][0];
            dice[a-1][0] = dice[a-1][2];
            dice[a-1][2] = 7 - top;
        }else if (b == -2){
            int right = dice[a-1][1];
            dice[a-1][1] = dice[a-1][0];
            dice[a-1][0] = 7 - right;
        }
    }
    for(int i = 0;i<n;i++){
        cout<< dice[i][0]<<" ";
    }
    return 0;
} 