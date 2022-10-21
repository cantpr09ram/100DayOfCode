#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	cout << "test 1 =======" << endl;
	double f = 3.1415926535;
	cout << f << endl; // 3.14159
	cout << setiosflags(ios::fixed); //只有在這項設置後，setprecision纔是設置小數的位數。
	cout << setprecision(0) << f << endl; //輸出0位小數，3
	cout << setprecision(1) << f << endl; //輸出1位小數，3.1
	cout << setprecision(2) << f << endl; //輸出2位小數，3.14
	cout << setprecision(3) << f << endl; //輸出3位小數，3.142
	cout << setprecision(4) << f << endl; //輸出4位小數，3.1416

	cout << "test 2 =======" << endl;
	//cout.setf跟setiosflags一樣，cout.precision跟setprecision一樣
	float a = 0.546732333;
	float b = 3.563768245;
	cout << a << endl;
	cout << b << endl;
	cout.setf(ios::fixed);
	cout.precision(3);
	cout << a << endl;
	cout << b << endl;
	cout.precision(1);
	cout << a << endl;
	cout << b << endl;
	return 0;
}