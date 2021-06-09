#include <stdio.h>
#include <stdlib.h>
int main()
{
    char tab[6]={'F','E','D','C','B','A'};
    for(int i=1;i<=6;i++)
    {
        for(int j=0;j<i;j++)
            printf("%c",tab[j]);
        printf("\n");
    }
    return 0;
}
