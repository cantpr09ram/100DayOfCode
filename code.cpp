#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, a, b, c, d;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>a>>b>>c;
        d = b*b - 4*a*c ;
        if(d >=0 && (int) sqrt(d)*sqrt(d) == d){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}