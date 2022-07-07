#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
class Solution {
    public:
        int a;
        int solution();

};

int Solution::solution(){
    for(int i = 0; i < a; i++){
        int arr[5];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        if (arr[0] - arr[1] == arr[1]-arr[2]){
            arr[4] = arr[3] + (arr[3] - arr[2]);
        }else if (arr[1] / arr[0] == arr[2] / arr[1])
        {
            arr[4] = arr[3] * (arr[2]/arr[1]);
        }
        cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;
    }
}
int main(void){
    Solution x;
    while(cin>>x.a){
        x.solution();
    }
}