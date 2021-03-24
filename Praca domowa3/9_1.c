#include <stdio.h>
#include <stdlib.h>
int min(double,double);
int main()
{
    double x,y;
    scanf("%lf",&x);
    scanf("%lf",&y);
    double wynik=min(x,y);
    printf("%lf",wynik);
    return 0;
}
int min(double x,double y)
{
    if(x<y)
    {
        return x;
    }
    else
        return y;
}
