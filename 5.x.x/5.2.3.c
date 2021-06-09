#include <stdio.h>
#include <stdlib.h>
int porownaj(char a, char b)
{
    if(a==b)
    {
        return 1;
    }
    return 0;
}
int porownaj_w(wchar_t a, wchar_t b)
{
    if(a==b)
    {
        return 1;
    }
    return 0;
}
int main()
{
    char a='Napis a',b='Napis b';
    wchar_t aw='Napis a',bw='Napis b';
    printf("%d\n",porownaj(a,b));
    printf("%d\n",porownaj(aw,bw));
    return 0;
}
