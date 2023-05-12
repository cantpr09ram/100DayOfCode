#include <iostream>
#include <vector> 
using namespace std;
int main(){
	int a[] = {1, 2, 3};
	int b = 4;
	swap(b, a[1]);
	cout<<b<<a[1];
	return 0;
}