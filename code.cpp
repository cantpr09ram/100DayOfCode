#include <iostream>
using namespace std;

int main(){
    int m, d, destiny;
    cin >> m >> d;
    destiny = (m*2+d)%3;

    if (destiny == 0){
        cout << "普通";
    }else if (destiny == 1)
    {
        cout << "吉";
    }else{
        cout<<"大吉";
    }
    return 0;
}