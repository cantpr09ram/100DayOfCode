#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    //-------
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-------
    int n, ans=0, tmp;
    vector <int> mountain;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>tmp;
        if(mountain.empty() || tmp!=mountain[mountain.size()-1]){
            mountain.push_back(tmp);
        }
    }
    for (int i=1; i<mountain.size()-1;i++) {
        if(mountain[i-1]<mountain[i] && mountain[i]>mountain[i+1]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}