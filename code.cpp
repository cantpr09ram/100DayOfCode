#include <iostream> 
using namespace std;

bool recur_split(int x, int y, int z, int m);
 
int n, t[16]; //大小依題意
 
int main(void){
    int total = 0;
    
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    
    cin >> n;
    for(int i=0; i<n; i++ ){
        cin >> t[i];
        total += t[i];
    }
    
    if(total % 3) cout << "NO";
    else cout << (recur_split(total/3, total/3, total/3, 0)?"YES":"NO");
    
    return 0;
}
 
bool recur_split(int x, int y, int z, int m){
    if(!x && !y && !z) return true; //完成題目要求的分配
    
    if(x >= t[m] && recur_split(x-t[m], y, z, m+1)) return true;
    
    if(y >= t[m] && recur_split(x, y-t[m], z, m+1)) return true;
    
    if(z >= t[m] && recur_split(x, y, z-t[m], m+1)) return true;
    
    return false;
}