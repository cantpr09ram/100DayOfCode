#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a = 5, b = 20;
    int *ptr = &a;
    printf("a = %d, b = %d\n",a,b);
    *ptr = *ptr + 10;
    printf("%d", a);
    system("pause");
    return 0;
}