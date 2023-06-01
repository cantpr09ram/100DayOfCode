#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

int main() {
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    int n, x, y, yee;
    cin>>n;
   while (n--){
        cin>>x>>y;
        yee = 100 - (y+x);
        if(0<yee && yee<=30){
            cout<<"sad!"<<endl;
        }else if (30<yee && yee<=60){
            cout<<"hmm~~"<<endl;
        }else if (60<yee && yee<100){
            cout<<"Happyyummy"<<endl;
        }else{
            cout<<"evil!!"<<endl;
        }
   }
   
    return 0;
}
//d470