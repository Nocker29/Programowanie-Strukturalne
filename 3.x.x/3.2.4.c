#include <stdio.h>
#include <stdlib.h>
void zamiana(int *wsk1,int *wsk2)
{
    int liczba1=*wsk1;
    if(*wsk1>*wsk2)
    {
        *wsk1=*wsk2;
        *wsk2=liczba1;
    }
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    zamiana(&x,&y);
    printf("\n%d %d",x,y);
    return 0;
}
