#include <stdio.h>
#include <stdlib.h>
int main()
{
    char tablica[26];
    for(int i=0;i<26;i++)
        tablica[i]=i+97;
    for(int i=0;i<26;i++)
        printf("%c ",tablica[i]);
    return 0;
}
