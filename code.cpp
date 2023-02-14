#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>matrix;
void flip(){reverse(matrix.begin(),matrix.end());}
void rotate(){
    vector<vector<int>>tmp;
    for(int i=0;i<matrix[0].size();i++){
        vector<int>combine;
        for(int j=0;j<matrix.size();j++) combine.push_back(matrix[j][i]);
        tmp.push_back(combine);
    }
    matrix=tmp;
    flip();
}
int main(){
    int R,C,M;
    while(cin>>R>>C>>M){
        matrix.clear();
        for(int i=0;i<R;i++){
            vector<int>tmp;
            for(int i=0;i<C;i++){
                int x; cin>>x;
                tmp.push_back(x);
            }
            matrix.push_back(tmp);
        }
        vector<bool>oper;
        while(M--){
            bool x; cin>>x;
            oper.push_back(x);
        }
        reverse(oper.begin(),oper.end());
        for(bool b:oper){
            if(!b) rotate();
            else flip();
        }
        cout<<matrix.size()<<" "<<matrix[0].size()<<"\n";
        for(vector<int> v:matrix) for(int i=0;i<v.size();i++) cout<<v[i]<<(" \n"[i==v.size()-1]);
    }
    return 0;
}