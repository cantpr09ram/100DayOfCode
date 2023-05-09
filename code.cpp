#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int money = 0, book, day,n;
    cin>>n;
    vector <int>book_list;
    for(int i=0;i<n;i++){
        cin>>book>>day;
        if(day>100){
            book_list.push_back(book);
            money += (day-100)*5; 
        }
    }
    sort(book_list.begin(), book_list.end());

    for (auto it = book_list.begin(); it != book_list.end(); ++it) {
        cout << *it << " ";
    }

    cout<<endl<<money;

    return 0;
}