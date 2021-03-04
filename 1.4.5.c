#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,suma=0;
    printf("Podaj liczbe calkowita, nie ujemna: ");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("n=%d\n",a);
        for(int i=0;i<a;i++)
        {
            printf("%d ",i*i);
            suma+=i*i;
        }
        printf("\nSuma=%d",suma);
    }
    else
        printf("Podaj dodatnia liczbe");
    return 0;
}
