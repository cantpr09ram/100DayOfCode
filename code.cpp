#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a;
	cin >> a;
	cout << (a/12)*50 + (a%12)*5; 
	return 0;
}