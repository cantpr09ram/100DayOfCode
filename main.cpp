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

 