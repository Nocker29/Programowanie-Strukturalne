#include <stdio.h>
#include <stdlib.h>
int najwieksza(int *n, int *tab)
{
    int max=tab[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(max<*tab)
        {
            max=*tab;
        }
        tab++;
    }
    return max;
}
int najmniejsza(int *n,int *tab)
{
    int min=tab[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(min>*tab)
            min=*tab;
        tab++;
    }
    return min;
}
int najwieksza_indeks(int *n, int *tab)
{
    int max=tab[0];
    int i,indeks=0;
    for(i=0;i<n;i++)
    {
        if(max<*tab)
        {
            max=*tab;
            indeks=i;
        }
        tab++;
    }
    return indeks;
}
int najmniejsza_indeks(int *n, int *tab)
{
    int min=tab[0];
    int i,indeks=0;
    for(i=0;i<n;i++)
    {
        if(min>*tab)
        {
            min=*tab;
            indeks=i;
        }
        tab++;
    }
    return indeks;
}
int najwieksza_bezw(int *n,int *tab)
{
    int max=tab[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(max<abs(*tab))
            max=abs(*tab);
        tab++;
    }
    return max;
}
int najmniejsza_bezw_indeks(int *n,int *tab)
{
    int min=tab[0];
    int i,indeks=0;
    for(i=0;i<n;i++)
    {
        if(min>abs(*tab))
        {
            min=abs(*tab);
            indeks=i;
        }
        tab++;
    }
    return indeks;
}
int main()
{
    int liczby[]={6,5,-20,-3,4};
    int n=sizeof(liczby)/sizeof(liczby[0]);
    int max=najwieksza(n,liczby);

    int max_indeks=najwieksza_indeks(n,liczby);
    printf("max = %d, indeks = %d\n",max,max_indeks);

    int min=najmniejsza(n,liczby);
    int min_indeks=najmniejsza_indeks(n,liczby);
    printf("min = %d, indeks = %d\n",min,min_indeks);

    int max_bezw=najwieksza_bezw(n,liczby);
    printf("max bezwzgledna = %d\n",max_bezw);

    int min_bezw_indeks=najmniejsza_bezw_indeks(n,liczby);
    printf("min bezwgledna = %d\n",min_bezw_indeks);
    return 0;
}
