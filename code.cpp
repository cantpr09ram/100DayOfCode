#include<iostream>
using namespace std;
int main(){
    int s,t,n,m,r;
    cin>>s>>t>>n>>m>>r;
    int A[s][t];
    int B[n][m];
    int A_sum=0;
    for(int i=0;i<s;i++){
        for(int j=0;j<t;j++){
            cin>>A[i][j];
            A_sum+=A[i][j];
        }   
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>B[i][j];
        }   
    }
     
    int total=0;
    int minn=2000000;
    for(int i=0;i<n-s+1;i++){
        for(int j=0;j<m-t+1;j++){
            int not_same=0;
            int small_sum=0;
            for(int y=0;y<s;y++){
                for(int z=0;z<t;z++){
                    if(B[y+i][z+j]!=A[y][z]){
                        not_same++;
                    }
                    small_sum+=B[y+i][z+j];
                }
            }
             
            if(not_same<=r){
                total++;
                int diff=abs(small_sum-A_sum);
                if(diff<minn){
                    minn=diff;
                }
            }
        }   
    }
    cout<<total<<endl;
    if(total==0)cout<<-1<<endl;
    else cout<<minn<<endl;
    return 0;
} 