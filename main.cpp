#include <iostream>
#include <vector> 
using namespace std;
int main(){
	vector <pair<int, int>> a;
	a.push_back(make_pair(1, 2));
	a.push_back(make_pair(1, 2));
	a.push_back(make_pair(1, 2));
	cout<<a.size();
	return 0;
}