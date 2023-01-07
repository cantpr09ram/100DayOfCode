# FinalExam
## string
#### 基礎操作
```c++
#include <string> //可有可無
int main(void){
    string s1; //宣告空字串
    cin >> s1; //輸入空字串
    cout << s1; //輸出字串
}
```
#### 建構,begin(),end(),for(auto ...){}
```c++
string s0 ("Initial string"); //宣告一個字串物件,初值為"Initial string"
string s1 (s0.begin(), s0,begin()+7);//s1的初值是s0的前七個
string s1 (s0.end()-7, s0,end());//後六個 

for(it = s0.begin(); it != s0.end(); it++){
    cout<<*it;
}

for(auto c:s0) cout<< c ;
```
#### 相加
```c++
string a;
string b;
string c = a+b;
```
#### size(), length()
```c++
string a;
a.size()//回傳長度
a.length() //回傳長度()
// size() 跟 length()等效

for(auto c: str){ //by-value
    cout<<c;
}

for(anto &c:str){//by-reference
    cout<<c
}
```