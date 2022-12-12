#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
        int n,m;
        cin>>n>>m;
        int a[100][100];
        int x = 0, y = 0, x1 = 0, y1 = 0, x2 = n-1, y2 = n-1, turn = 1;

        for(int j=0;j<n*n;j++){
            a[x][y] = j+1;
            if (turn == 1){
                x++;
                if(x==x2 && y == y1){
                    turn = 2;
                    y1++;
                }
            }else if (turn == 2){
                y++;
                if(x==x2 && y == y2){
                    turn = 3;
                    x2--;
                }
            }else if (turn == 3){
                x--;
                if(x==x1 && y == y2){
                    turn = 4;
                    y2--;
                }
            }else if (turn == 4){
                y--;
                if(x==x1 && y == y1){
                    turn = 1;
                    x1++;  
                }
            }
        }
        //print
        for(int j = 0;j<n;j++){
            for(int k=0;k<n;k++){
                if(m == 1) cout<<setw(5)<<a[k][j];
                else cout<<setw(5)<<a[j][k];
            }
            cout<<endl;
        }
    }
    return 0;
}
/*

d596

a694
a417
*/