#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
	vector <int> arr;
	int tmp, n;
	while (cin>>tmp && tmp != 0){
		arr.push_back(tmp);
	}
	cin>>n;

	for(int j=0;j<n;j++){
		int arr1[arr.size()] = {0};
		if(arr[0]>arr[1]){
			arr1[1] += arr[0]*0.1;
		}

		for(int i=1;i<arr.size()-1;i++){
			if(arr[i]>arr[i-1]){
				arr1[i-1] += arr[i]*0.05;
			}
			if(arr[i]>arr[i+1]){
				arr1[i+1] += arr[i]*0.05;
			}
		}
		
		if(arr[arr.size()-1]>arr[arr.size()-2]){
			arr1[arr.size()-2] += arr[arr.size()-1]*0.1;
		}
		
		for(int i=0;i<arr.size();i++){
			arr[i]+=arr1[i];
		}
	}
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
    return 0;
}