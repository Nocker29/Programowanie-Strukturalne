#include <stdio.h>
#include <stdlib.h>
void przepisz_c(char *tab1,char *tab2)
{
    strcpy(tab1,tab2);
    puts(tab1);
}
void przepisz_cw(wchar_t *tab1,wchar_t *tab2)
{
    wcscpy(tab1,tab2);
    _putws(tab1);
}
int main()
{
    char tab1[]="Napis a";
    char tab2[]="B napis";
    wchar_t tab3[]=L"Napis a";
    wchar_t tab4[]=L"B napis";
    przepisz_c(tab1,tab2);
    przepisz_cw(tab3,tab4);
    return 0;
}
