#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Podaj a, b, c\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("a=%d b=%d c=%d\n",a,b,c);
    int delta=pow(b,2)-4*a*c;
    printf("Delta = %d\n",delta);
    int x1,x2,x0;
    if(delta>=0)
    {
        if(delta==0)
        {
            x0=-b/2*a;
            printf("x0 = %d",x0);
        }
        else
        {
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            printf("x1 = %d \nx2 = %d",x1,x2);
        }
    }
    else
    {
        printf("Nie ma rozwiazan\n");
    }
    return 0;
}
