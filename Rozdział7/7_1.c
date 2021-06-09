#include <stdio.h>
#include <stdlib.h>
int main()
{
    char x;
    int i=0;
    while(x!='#')
    {
        x=getchar();
        if(x!='#')
            i++;
    }
    printf("Ilosc znakow: %d",i);
    return 0;
}
