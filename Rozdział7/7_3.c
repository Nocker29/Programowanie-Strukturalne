#include <stdio.h>
#include <stdlib.h>
int main()
{
    char liczby[100];
    int i=0,znak=1;
    while(znak!=0)
    {
        scanf("%d",&znak);
        if(znak!=0)
        {
            liczby[i]=znak;
            i++;
        }
    }
    i=0;
    int ile_p=0,ile_np=0;
    float srednia_p=0,srednia_np=0;
    while(liczby[i]!='\0')
    {
        if(liczby[i]%2==0)
        {
            ile_p++;
            srednia_p+=liczby[i];
        }
        else if(liczby[i]%2!=0)
        {
            ile_np++;
            srednia_np+=liczby[i];
        }
        i++;
    }
    srednia_p/=ile_p;
    srednia_np/=ile_np;
    printf("\nParzystych: %d, oraz srednia: %f\nNie parzystych: %d, oraz srednia: %f\n",ile_p,srednia_p,ile_np,srednia_np);
}
