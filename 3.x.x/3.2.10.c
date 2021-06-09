#include <stdio.h>
#include <stdlib.h>
int bezargumentowa_funkcja()
{
    double zmienna;
    double *wsk=&zmienna;
    return *wsk;
}
int main()
{
    return 0;
}
