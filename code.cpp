#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int a, b;
    while (cin>>a>>b) {
        int n=0;
        for(int i=a;i<=b;i++) {
            if(i == 1) continue;
            int x = 1;
            for(int j=2;j*j<=i;j++){
                if(i%j == 0) {
                    x = 0;
                    break;
                }
            }
            n+=x;
        }
        cout<<n<<endl;
    }
}