#include <stdio.h>
#include <stdlib.h>
void kopiuj_c(char *nap, char *tab)
{
    strcpy(tab,nap);
    puts(tab);
}
void kopiuj_w(wchar_t *nap, wchar_t *tab)
{
    wcscpy(tab,nap);
    _putws(tab);
}
int main()
{
    const char* napis="Napis";
    char tab[8];
    const wchar_t* napis_w=L"Napis2";
    wchar_t tab_w[8];
    kopiuj_c(napis,tab);
    kopiuj_w(napis_w,tab_w);
    return 0;
}
