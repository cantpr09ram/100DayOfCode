#include<iostream>
#include<vector>
#include <deque>
using namespace std;
int main(){
    int m, n;
    string e;
    vector <string> arr;
    string str;
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        cin>>e;
        arr.push_back(e);
    }
    cin>>str;

    for(int i=0;i<n;i++) {
        int cnt=0;
        deque<char>dq;
        for(int j=0;j<m;j++){
            if(arr[i][j]=='1'){
                cnt++;
                dq.push_back(str[j]);
            }
            else{
                dq.push_front(str[j]);
            }
        }
        string rt;
        if(cnt%2==0){
            for(char st:dq)rt+=st;
        }else{
            if(str.size()%2==0){
                int mid=str.size()/2;
                for(int k=mid;k<str.size();k++)rt+=dq[k];
                for(int k=0;k<mid;k++)rt+=dq[k];
            }
            else{
                int mid=str.size()/2;
                for(int k=mid+1;k<str.size();k++)rt+=dq[k];
                rt+=dq[mid];
                for(int k=0;k<mid;k++)rt+=dq[k];
            }
        }
        str = rt;
    }
    cout<<str;
    return 0;
}
//BACDA
//BCAAD
//CABAD
//10110
//dacba
//bacda