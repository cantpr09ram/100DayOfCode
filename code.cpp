#include <iostream>
using namespace std;

int main(){
  int n, a[8], b[8];
  cin >> n;

  while (n--){
    bool blown=true;

    for (int i=1; i<=7; i++){
      cin >> a[i];
    }

    for (int i=1; i<=7; i++){
      cin >> b[i];
    }
    
    if (a[2]==a[4] || a[2]!=a[6] || b[2]==b[4] || b[2]!=b[6]){
      cout <<"A";
      blown=false;
    }
    if (!a[7] || b[7]){
      cout <<"B";
      blown=false;
    }
    if (!(a[2]^b[2])+!(a[4]^b[4])+!(a[6]^b[6])){
      cout <<"C";
      blown=false;
    }
    cout << (blown ? "None\n" : "\n");
}

}