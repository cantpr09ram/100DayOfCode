#include<iostream>
using namespace std;

int main(){
    int a, b, t;
    while( cin >> a >> b ){
        while( b!=0 ){
            t = b;
            b = a%b;
            a = t;
            //swap a and b
        }
        cout << a << endl;
    }
    return 0;
}