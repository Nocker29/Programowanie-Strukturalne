#include <stdio.h>
#include <stdlib.h>
void suma_tablic(int tab1[],int tab2[],int tab3[],int n)
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i]+tab2[i];
    }
}
void max_tab(int tab1[],int tab2[],int tab3[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(tab1[i]>tab2[i])
            tab3[i]=tab1[i];
        else
            tab3[i]=tab2[i];
    }
}
void zamiana(int tab1[],int tab2[],int tab3[],int n)
{
    int schowek;
    for(int i=0;i<n;i++)
    {
        schowek=tab3[i];
        tab3[i]=tab2[i];
        tab2[i]=tab1[i];
        tab1[i]=schowek;
    }
}
int main()
{
    int n,x;
    printf("Podaj n: ");
    scanf("%d",&n);
    int tab1[n];
    int tab2[n];
    int tab3[n];
    printf("Podaj po kolei wartosci tablicy 1:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tab1[i]);
    }
    printf("Podaj po kolei wartosci tablicy 2:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tab2[i]);
    }

    printf("tab1: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",tab1[i]);
    }
    printf("\ntab2: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",tab2[i]);
    }

    suma_tablic(tab1,tab2,tab3,n);
    printf("\n\ntab3: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",tab3[i]);
    }

    max_tab(tab1,tab2,tab3,n);
    printf("\ntab3: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",tab3[i]);
    }

    zamiana(tab1,tab2,tab3,n);
    printf("\n\ntab1: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",tab1[i]);
    }
    printf("\ntab2: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",tab2[i]);
    }
    printf("\ntab3: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",tab3[i]);
    }
    return 0;
}
