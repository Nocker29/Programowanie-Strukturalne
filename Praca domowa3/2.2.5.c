#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%d",&n);
    int wynik=2;
    for(int i=1;i<n;i++)
    {
        wynik*=2;
    }
    printf("2 do potegi %d = %d",n,wynik);
    return 0;
}
