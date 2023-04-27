#include<iostream>
using namespace std;
int main(){
   int n, s, m;
   cin>>n>>s;
   int ans[n], shell[n];
   for(int i=0; i<n;i++){
        cin>>ans[i];
   }
   
   cin>>m;
   for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>shell[j];
        }

        int score = 0;
        for(int j=0; j<n; j++){
            if(ans[j] == shell[j]){
                score += s;
            }
        }
        cout<<score<<endl;
   }
   return 0;
}