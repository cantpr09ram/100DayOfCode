#include <iostream>
#include <math.h>
using namespace std;

int main(void){
    long long int a, b;
    while(cin >> a >> b){
        cout << abs(a - b);
    }
    
    return 0;
}