#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int a, b, c, d;
    while(cin>>a>>b>>c>>d){
        if(b != c){
            cout<<"Error"<<endl;
            continue;
        }else{
            long long int a1[100][100], a2[100][100], temp = 0,ans[100][100] = {0};
            //input 
            for(int i = 0;i<a;i++){
                for(int j = 0;j<b;j++){
                    cin>>a1[i][j];
                }
            }
            for(int i = 0;i<c;i++){
                for(int j = 0;j<d;j++){
                    cin>>a2[i][j];
                }
            }
            //counting
            for(int i = 0;i<a;i++){
                for(int j = 0;j<d;j++){
                    for(int k=0;k<b;k++){
                        ans[i][j] += a1[i][k]*a2[k][j];
                    }
                }
            }

            //print
            for(int i = 0;i<a;i++){
                for(int j = 0;j<d;j++){
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
/*

d596

a694
a417
*/