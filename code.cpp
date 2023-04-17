#include<iostream>
using namespace std;
int main(){
    int s,e,a;
    int day=0;
    cin>>s>>e>>a;
    while(s<e && a) {
        ++day;
        if(day %10 ==0) a--;

        if ((day-1)%10 >= 8){
            continue;
        }else if ((day-1)%3 == 2){
            s += s/3;
        }else{
            s += s/10;
        }
    }
    if(s >= e){
        cout<<day+1;
    }else{
        cout<<"unsalable";
    }
    return 0;
}