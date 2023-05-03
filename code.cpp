#include <iostream>
using namespace std;
int main(){
    int a,area,row,colume;
    while(cin>>a){
        if(a<2500){
            area=1;
            if(a%25==0){
                row=a/25;
                colume=25;
            }else{
                row=(a/25)+1;
                colume=(a%25);
            }
        }else if(2500<a&&a<=7500){
            area = 2;
            row=2;
            a=a-2500;
            if(a%50==0){
                row=a/50;
                colume=50;
            }else{
                row=(a/50)+1;
                colume=(a%50);
            }
        }else if(7500<a&&a<=10000){
            a=a-7500;
            area=3;
            if(a%25==0){
                row=a/25;
                colume=25;
            }else{
                row=(a/25)+1;
                colume=(a%25);
            }
        }
        cout<<area<<" "<<row<<" "<<colume;
    }
}