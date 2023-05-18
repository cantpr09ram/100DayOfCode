#include <iostream> 
using namespace std;

int main(void){
    int n, m;
    char ch;
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    cin>>n>>m;
    cin>>ch;
    char arr[n][m];
    long long tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        for(int j=m-1;j>=0;j--){
            if(tmp %2 == 1){
                arr[i][j] = ch;
            }else{
                arr[i][j] = '.';
            }
            tmp /= 2;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}