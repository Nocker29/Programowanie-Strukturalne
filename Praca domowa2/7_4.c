#include <stdio.h>
#include <stdlib.h>
int main()
{
    char znak,znaki[100];
    int ile_zmian=0,i=0;
    while(znak!='#')
    {
        znak=getchar();
        if(znak!='#')
            znaki[i]=znak;
        i++;
    }
    printf("\n");
    i=0;
    while(znaki[i]!='\0')
    {
        if(znaki[i]=='.')
        {
            znaki[i]='!';
            ile_zmian++;
        }
        else if(znaki[i]=='!')
        {
            znaki[i]='!!';
            ile_zmian++;
        }
        i++;
    }
    i=0;
    while(znaki[i]!='\0')
    {
        printf("%c",znaki[i]);
        i++;
    }
    printf("\nzmian: %d",ile_zmian);
    return 0;
}
