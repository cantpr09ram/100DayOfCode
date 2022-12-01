#include<iostream>
using namespace std;
int main()
{
    int n,m,c1[100000],c2[100000],l,r,i,sum=0;
    c1[0]=0;
    c2[0]=0;    
    while(cin>>n)                    
    {
        cin>>m;
        for(i=1;i<=n;i++)
        {
            cin>>c1[i];
            if(i>=2)
            {
                c2[1]=c1[1];  
                c2[i]=c2[i-1]+c1[i];
            }
        }
        for(i=1;i<=m;i++)    
        {
            while(cin>>l>>r)
            {
                cout<<c2[r]-c2[l-1]<<endl;
            }
        }
    } 
    return 0;
}

 