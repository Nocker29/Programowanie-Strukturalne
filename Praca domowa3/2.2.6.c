#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m;
    printf("Podaj n: ");
    scanf("%d",&n);
    printf("Podaj m: ");
    scanf("%d",&m);
    if(n<0 || m<0)
    {
        printf("Nie podawaj ujemnych wartosci");
    }
    else if(n==0 && m==0)
    {
        printf("Nie powinno podawac sie dwoch wartosci 0\n");
    }
    else if(m==0)
    {
        printf("%d do potegi 0 = 1",n);
    }
    else
    {
        int n1=n;
        for(int i=1;i<m;i++)
        {
            n*=n1;
        }
        printf("%d do potegi %d = %d",n1,m,n);
    }
    return 0;
}
