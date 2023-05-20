
#include <iostream>
#include <map>
#include <string>
#include <cmath>

using namespace std;

// 將羅馬數字轉換為阿拉伯數字
int romanToDecimal(string romanNum) {
    map<char, int> romanMap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int decimalNum = 0;
    for (int i = 0; i < romanNum.length(); i++) {
        int currentNum = romanMap[romanNum[i]];
        int nextNum = i < romanNum.length() - 1 ? romanMap[romanNum[i + 1]] : 0;
        decimalNum += currentNum < nextNum ? -currentNum : currentNum;
    }
    return decimalNum;
}

// 將阿拉伯數字轉換為羅馬數字
string intToRoman(int num) {
    string romanNum = "";
    int nums[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    for (int i = 0; i < 13; i++) {
        while (num >= nums[i]) {
            romanNum += symbols[i];
            num -= nums[i];
        }
    }
    return romanNum;
}

// 計算兩個羅馬數字的差的絕對值，並返回羅馬數字
string romanAbsDiff(string romanNum1, string romanNum2) {
    int diff = romanToDecimal(romanNum1) - romanToDecimal(romanNum2);
    if (diff == 0) {
        return "ZERO";
    }
    int absDiff = abs(diff);
    return intToRoman(absDiff);
}

// 主函數
int main() {
    // 計算兩個羅馬數字的差的絕對值，並輸出結果
    string romanNum1 ;
    string romanNum2 ;
    while(cin>>romanNum1){
    if(romanNum1[0]=='#')
    break;
    cin>>romanNum2;
    cout << romanAbsDiff(romanNum1, romanNum2) << endl;
    }

    return 0;
}