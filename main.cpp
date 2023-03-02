#include <iostream>
#include <vector> 
using namespace std;
int main()
{
	vector <vector <int>> test;
	test.push_back({0,0});
	test.push_back({1,1});
	for(auto &j:test) {
		for(auto k: j) {
			cout<<k;
		}
		cout<<endl;
	}
	return 0;
}