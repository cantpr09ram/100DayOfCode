#include <stdio.h>
#include <stdlib.h>
int main()
{
int N;
scanf("%d",&N);
        int k=N-1,p=N-(N-1);
    for(int i=0;i<N;i++)
    {
        for(int l=0;l<k;l++)
        {
            printf("_");
        }    
    for(int u=0;u<p;u++)
    {
        printf("*");
    
        
    }
    for(int y=0;y<k;y++)
    {
        printf("_");
        }
        printf("\n");
        p=p+2;
            k=k-1;

    }
}

#include<iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0);
  int num;
  cin>>num;
  for(int i = 0; i< num; i++){
    int a, b ,x = 1,y = 1;
    cin>>a>>b;
    if(a > 3) x = a/3;
    if(b > 3) y = b/3;

    cout<<x*y<<endl; 
  }
  return 0;
}
 	AC (5ms, 352KB) 