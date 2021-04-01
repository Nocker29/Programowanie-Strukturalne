#include <stdio.h>
#include <stdlib.h>
void przepisanie(int tab1[],int tab2[],int n)
{
    for(int i=0;i<n;i++)
        tab2[i]=tab1[i];
}
void przepisanie_odwrotnie(int tab1[],int tab2[],int n)
{
    int i=n-1;
    int j=0;
    while(i>=0)
    {
        tab2[i]=tab1[j];
        j++;
        i--;
    }
}
int main()
{
    int n,x;
    printf("Podaj n: ");
    scanf("%d",&n);
    int tab1[n];
    int tab2[n];
    printf("Podaj po kolei wartosci tablicy:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tab1[i]);
    }

    printf("tab1: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",tab1[i]);
    }

    printf("\ntab2: ");
    przepisanie(tab1,tab2,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",tab2[i]);
    }

    printf("\ntab2: ");
    przepisanie_odwrotnie(tab1,tab2,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",tab2[i]);
    }
    return 0;
}
