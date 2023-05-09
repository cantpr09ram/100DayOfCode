#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int p[3];
    string n;
    cin>>p[0]>>p[1]>>p[2];
    cin>>n;
    for(int i=0;i<n.size();i++){
        if(p[i] != '-'){
            cout<<n[i];
        }else if (n[i-1] >= n[i+1]){
            cout<<n[i];
        }else if (n[i-1]+1 == n[i+1]){
            continue;
        }else{
            if(p[2] == '1'){
                for(int j=p[i-1]+1;j<p[i+1];i++){
                    for(int k=0;k<p[1];k++){
                        if(p[0] == 1){
                            cout<<(char)j;
                        }else if(p[0] == 2){
                            cout<<(char)j-26;
                        }else{
                            cout<<'*';
                        }
                    }
                }
            }else{
                for(int j=p[i+1]+1;j>p[i+1];i--){
                    for(int k=0;k<p[1];k++){
                        if(p[0] == 1){
                            cout<<(char)j;
                        }else if(p[0] == 2){
                            cout<<(char)j-26;
                        }else{
                            cout<<'*';
                        }
                    }
                }
            }
        }
    }
    return 0;
}