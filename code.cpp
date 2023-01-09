#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    while (cin >> n >> m){
        int num[500][500];
        for (int y=0; y<n; y++){
            for (int x=0; x<n; x++){
                cin >> num[y][x];
            }
        }
        int x1, x2, y1, y2;
        for (int i=1; i<=m; i++){
            cin >> x1 >> y1 >> x2 >> y2;
            int sum=0;
            for (int Y=y1-1; Y<y2; Y++){
                for (int X=x1-1; X<x2; X++){
                    sum += num[X][Y];
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
}