#include <iostream> 
using namespace std;

int main(void){
//上下左右 x, y座標位移量
    int dx[] = {-1, 1, 0, 0},dy[] = {0, 0, -1, 1};

    int r, c;
    int p, total, count;
    
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //========================== 
    cin >> r >> c;
    int a[r+2][c+2] = {}, b[r+2][c+2]; //加邊框 0 

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cin >> a[i][j];
        }
    } 
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(a[i][j]){ //非零部變動
                b[i][j] = a[i][j];
             continue;
            } 
        total = count = 0;
        for(int k=0; k<4; k++){
            p = a[i+dx[k]][j+dy[k]];
            if(p == 0) continue; //相鄰為 0 不考慮
            total += p;
            count++;
        }
        b[i][j] = total>0? total/count: 0;
        }
    }
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cout << b[i][j] << ' ';
        }
        cout << '\n';
    } 
    return 0;
}