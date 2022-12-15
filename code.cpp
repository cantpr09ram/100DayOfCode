#include<iostream>
using namespace std;
vector <int> v[10] = {{} , {2,4}, {1,3,5},{2,6},{1,5,7},{2,4,6,8},{3,5,9},{4,8},{5,7,9},{6,8}};
/*
    1 2 3
    4 5 6
    7 8 9
*/
int main(int argc, const char * argv[]) {
    int t, ans[10] = {0};
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        for (int i:v[a]) { // 當我的 i 在 v[a] 這個裡面的數字時，就 ans[i] = 1;
            ans[i] = 1;
        }
        for (int i:v[b]) {
            ans[i] = 0;
        }
        for (int i:v[c]) {
            ans[i] = 0;
        }
        bool flag = false;
        for (int i = 1;i < 10;i++) {
            if (ans[i]) {
                ans[i] = 0;
                cout << i << " ";
                flag = true;
            }
        }
        if (!flag) cout << "Empty";
        cout << "\n"; 
    }
} 
/*

d596

a694
*/