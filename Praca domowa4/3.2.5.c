#include <stdio.h>
#include <stdlib.h>
int suma(int *wsk1,int *wsk2)
{
    int suma=*wsk1+*wsk2;
    return suma;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("\n%d",suma(&x,&y));
    return 0;
}
