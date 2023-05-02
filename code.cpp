#include <iostream>
using namespace std;
int main(){
    int high, start, n;
    bool right = false; 
    cin>>n;
    int hell[n];
    for(int i=0; i<n; i++){
        cin>>hell[i];
    }
    cin>>start;
    start--;
    if(start>1 && start<n-1){
        if(hell[start - 1]>hell[start]){
            right = true;
        }else if (hell[start + 1]>hell[start]){
            right = false;
        }else{
            if(hell[start]-hell[start+1] > hell[start]-hell[start-1]){
                right = true;
            }else{
                right = false;
            }
        }
    }else if (start == 0){
        right = true;
    }else if (start == n-1){
        right = false;
    }
    
    //cout<<right;
    if(right){
        while (start<n){
            if(start == n-1){
                cout<<start+1;
                break;
            }else if(hell[start+1]>hell[start]){
                cout<<start+1;
                break;
            }else{
                start++;
            }
            
        }
    }else{
        while (start > -1){
            if(start == 0){
                cout<<start+1;
                break;
            }else if(hell[start-1]>hell[start]){
                cout<<start+1;
                break;
            }else{
                start--;
            }
            
        }
    }   
    return 0;
}