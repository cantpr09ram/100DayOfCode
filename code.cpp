#include <bits/stdc++.h>
#define N <<'\n';
using namespace std;

 

int main() {
    ios::sync_with_stdio,cin.tie(0);
    int n,m,k;

    cin>>n>>m>>k;

    int board[n+1][m+1];
    int bomb[n][m];
    int king[k+1][5];

    for(int i = 1 ; i <= k ; i++) {
        int a[5];
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        a[4] = 0;
        for(int j = 0 ; j < 5 ; j++) {
            king[i][j] = a[j];
        }
    }

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            board[i][j] = 0;
            bomb[i][j] = 0;
        }
    }

    int f = k;

    while(f>0) {
        for(int i = 1 ; i <= k ; i++) {
        //死亡就跳過 
            if(king[i][4] == 1) {
                continue;
            }
            //cout<<"第"<<i<<"隻 king"N
            //設置炸彈
            //cout<<"在"<<king[i][0]<<","<<king[i][1]<<"設置炸彈"N
            bomb[king[i][0]][king[i][1]] = 1;
            //移動 
            king[i][0] += king[i][2];
            king[i][1] += king[i][3];
            //出界 
            if(king[i][0] >= n || king[i][1] >= m||king[i][0] < 0 || king[i][1] < 0) {
            //cout<<"出界"N
                king[i][4] = 1;
                f--;
                continue;
            }
        }

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(bomb[i][j] == 1) {
                    int checkbomb = 0;
                    for(int l = 1 ; l <= k ; l++) {
                        if(king[l][0] == i && king[l][1] == j&&king[l][4] == 0) {
                        //cout<<"第"<<l<<"隻 king 被炸死"N
                        king[l][4] = 1; 
                        f--;
                        checkbomb++;
                        }
                    }
                    if(checkbomb > 0) {
                        //炸彈消失
                        bomb[i][j] = 0;

                    }
                }

            }

        }

    }

    int num = 0;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            if(bomb[i][j] == 1) {
                num++;
            }
        }
    }

    cout<<num N
    return 0;
}

