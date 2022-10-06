#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,a,b,c,d=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {    int m=0;
        scanf("%d%d%d",&a,&b,&c);
        d=a;
        for(int f=0;f<b-a-1;f++)
        {
            
            d++;
            printf("%d ",d);
            if(d%c!=0)
            {    m=1;
                printf("%d ",d);
            }
        }
            if(m==0)
        {
            printf("No free parking spaces.");
        }
printf("\n");    }
}