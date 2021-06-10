#include <stdio.h>
#include <stdlib.h>
void kopiuj(char *nap, char *wnap)
{
    char tab[strlen(nap)];
    strcpy(tab,nap);
    char *wtab=&tab;
    *wnap=*wtab;
    puts(wnap);
}
void kopiuj_w(char *nap, char *wnap)
{
    char tab[strlen(nap)];
    wcscpy(tab,nap);
    char *wtab=&tab;
    *wnap=*wtab;
    _putws(wnap);
}
int main()
{
    char napis[]="Napis";
    char *wsk=&napis;
    wchar_t napis_w[]=L"Napis";
    wchar_t *wsk_w=&napis_w;
    kopiuj(&napis,wsk);
    kopiuj_w(&napis_w,wsk_w);
    return 0;
}
