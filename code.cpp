#include<iostream>
using namespace std;
int main(){
    int n, current=1, next=3, temp;
    cin>>n;
        for(int i=1; i<n; i++){
            temp = current;
            current = next;
            next += temp;
        }
        cout<<current;
    return 0;
}
