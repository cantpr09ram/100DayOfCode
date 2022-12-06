#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, sum = 0, ans = 0, prefix, suffix;
    int a1[1000000] = {0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    prefix = a1[0];
    suffix = a1[n-1];
    for (int i = 0,j = n-1;i < n && j >= 0;) {
        if (prefix == suffix) {
            ans += 1;
            prefix += a1[++i];
        } else if (prefix > suffix) {
            suffix += a1[--j];
        } else if (suffix > prefix) {
            prefix += a1[++i];
        }
    }
    cout<<ans;
    return 0;
}
/*
第一次上排行www

看到版上很多NA50%，來提供一下我解題的想法

程式碼蠻短的，不到1Bytes~~

------------------------------------

範例測資3,6,2,1,4,5,2有三組等值首尾和，分別是：

11 = 3+6+2 = 2+5+4

12 = 3+6+2+1 = 2+5+4+1

23 = 3+6+2+1+4+5+2 = 2+5+4+1+2+6+3 (全部陣列的和，也代表答案至少有一組)

------------------------------------

以上面的測資來說

其實可以看出3+6+2和2+5+4重複出現在三個式子當中

如果可以避免重複運算它們，就可以節省一些時間

我的想法是用【差】來避免

以 範例測資3,6,2,1,4,5,2來說

我先算首項和尾項的差-->dif = 3 - 2 = 1

如果dif>0，我們可以知道前段和(Prefix Sum)>後段和(Suffix Sum)

所以我們再減掉一項後段數-->dif = 1 - 5 = -4

這時候發現dif<0，前段和(Prefix Sum)<後段和(Suffix Sum)

於是我們再加上一項前段數-->dif = -4 + 6 = 2

重複上述操作

當dif=0的時候，便是前段和(Prefix Sum)=後段和(Suffix Sum)的時候

至於終止條件大家自行想想吧

-----------------------------------

而用【差】還有另一個好處是不會溢位

不過題目已經保證全部總合小於2147483647，所以其實不避考慮溢位的問題XD
*/