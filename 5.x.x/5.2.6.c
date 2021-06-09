#include <stdio.h>
#include <stdlib.h>
void kopiujn_c(char *nap1,char *nap2,int n)
{
    int i;
    for(i=0;i<n && nap1[i]!=0;i++)
    {
        nap2[i]=nap1[i];
    }
    nap2[i]=0;
    puts(nap2);
}
void kopiujn_cw(wchar_t *nap1,wchar_t *nap2,int n)
{
    int i;
    for(i=0;i<n && nap1[i]!=0;i++)
    {
        nap2[i]=nap1[i];
    }
    nap2[i]=0;
    _putws(nap2);
}
int main()
{
    char nap1[]="Napis";
    char nap2[]="Dlugi napis";
    kopiujn_c(nap1,nap2,3);
    return 0;
}
