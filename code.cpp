/*
#include <iostream>

using namespace std;

int main(void){
    string str;
    
    while(getline(cin, str)){
        int ans = 0;
        for (auto s : str){
            if(s == ' '){
                ans += 1;
            }
        }
        cout << ans+1 <<endl;
    }
    return 0;
}
*/
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int sum;
    string a;
    bool con,b;
    
    while(getline(cin,a))
    {
        sum=0;
        con=false;
        for(auto i:a)
        {
            b=isalpha(i);
            if(b && !con)
            { 
                sum++;
                con=true;
            } 
            else if(!b)
                con=false; 
        }
        cout<<sum<<"\n";
    }
    return 0;
}

 