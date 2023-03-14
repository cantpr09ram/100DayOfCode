#include<iostream>
#define int long long
using namespace std;
string s;
int now=0;
int char2num(){
    //把char變int
    int ans=0;
    while(now<s.size()&&'0'<=s[now]&&s[now]<='9'){//進位
        ans=ans*10+s[now]-'0';
        now++;
    }
    return ans;
}
int cal(bool cmp);
int f();
signed main(){
    cin>>s;
    cout<<cal(0);
}
int f(){
    now+=2;
    int mx=cal(0),mn=mx;
    while(s[now]!=')'){
        now++;
        int tmp=cal(0);
        mx=max(mx,tmp);
        mn=min(mn,tmp);

    }
now++;
    return mx-mn;
}
int cal(bool cmp){
    int n;
    if('0'<=s[now]&&s[now]<='9')n=char2num();
    else n=f();
    if(cmp||s[now]==','||s[now]==')')return n;
    while(now<s.size()){
        if(s[now]=='+'){
            now++;
            int b=cal(1);
            n+=b;
        }
        else if(s[now]=='-'){
            now++;
            int b=cal(1);
            n-=b;
        }
        else if(s[now]=='*'){
            now++;
            int b=cal(0);
            n*=b;
        }
        if(s[now]==','||s[now]==')')return n;
    }
    return n;
}