#include <stdio.h>
#include <stdlib.h>
int main()
{
    char x,tablica[1000];
    int i=0;
    while(x!='#')
    {
        x=getchar();
        if(x!='#')
        {
            tablica[i]=x;
            i++;
        }
    }
    printf("%d\n",i);
    i=0;
    while(tablica[i]!='\0')
    {
        if(tablica[i]=='\n')
            i++;
        printf("%c-%d ",tablica[i],tablica[i]);
        if(i%8==0)
            printf("\n");
        i++;
    }
    return 0;
}
