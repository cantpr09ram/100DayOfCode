#include<iostream>
using namespace std;
int main()
{   
  int a,b,n;
  int ans = 0 ;
  cin>>a>>b;
  cin>>n;
    
  for(int i=0;i<n;i++)
  {
    int input ;
    int a_in = 0 ;
    int b_in = 0 ; 
    
    while (cin>>input)
    {
      if (input==a)
      {
        a_in++ ;
      }
      else if (input== -a)
      {
        a_in-- ;
      }
      else if (input== b)
      {
        b_in++ ;
      }
      else if (input== -b)
      {
        b_in-- ;
      }
      char ch = getchar();
      if(ch == '\n')
      {
        break;
      }
    }
        
    if((a_in>=1)&&(b_in>=1))
    {
      ans++;
    }
  }
  cout << ans ;
}