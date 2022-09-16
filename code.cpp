#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;
	while(cin >> n){
		int ans = 0;
		for(int i = 0; i<n; i++){
			ans += (n - i)*(n - i);
		}
		if (ans != 0){
			cout << ans << endl;
		}
		
	}
	return 0;
}