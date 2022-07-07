#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

class year{
    public:
    int a;
    string Dosomething();
};
string year::Dosomething(){
    if((a%4==0 && a%100!=0) || a%400==0){
        string a;
        a="閏年";
        return a;
    }else{
        string b;
        b="平年";
        return b;
    }
}

int main(void){
    year x;
    while(cin>>x.a){
        cout<<x.Dosomething()<<endl;
    }
}