#include <stdio.h>
#include <stdlib.h>
int * foo(int n)
{
    int tab[n];
    return &tab;
}
int main()
{
    printf("%p", foo(78));
    return 0;
}
