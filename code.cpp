#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    int n, m, p;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>m>>p;
        float x = ((float)p/(float)m - 1)*100;
        if(x >= 0){
            x += +0.00001;
        }else{
            x -= +0.00001;
        }
        char c='%';
        printf("%.2f%c ", x, c);

        if(x>=10.00 || x<=-7.00)
            printf("dispose\n");
        else
            printf("keep\n");
    }
    return 0;
}
    