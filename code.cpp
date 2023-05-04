#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int A, B, L;
    int A1, B1;
    int A2, B2;
    double r0, r1;
     
    while (cin >> A >> B >> L) {
        double mini = 100000.0;
        for (A1 = 1; A1 <= L; A1++) {
            for (B1 = 1; B1 <= L; B1++) {
                r0 = (double)A / (double)B;
                r1 = (double)A1 / (double)B1;
                if (__gcd(A1, B1)!=1 || r1 < r0) continue;
                if (r1 - r0 < mini) {
                    mini = r1 - r0;
                    A2 = A1;
                    B2 = B1;
                }
            }
        }
        cout << A2 << " " << B2 << "\n";
    }
    return 0;
}