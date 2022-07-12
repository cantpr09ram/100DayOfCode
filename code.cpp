#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
class Solution {
    public:
        int r, c;
        void solution();
};

void Solution::solution(){
    int i, j, arr[r][c];
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    for(i = 0; i < c; i++){
        for(j = 0; j < r; j++){
           cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
int main(void){
    Solution x;
    while(cin >> x.r>>x.c)
        x.solution();
    return 0;
}