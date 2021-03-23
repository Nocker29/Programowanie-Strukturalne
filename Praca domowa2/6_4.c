#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a;
    printf("Podaj znak: ");
    scanf("%c",&a);
    int ilosc=(int)a-64;
    printf("%d\n",ilosc);
    for(int i=1;i<ilosc+1;i++)
    {
        for(int j=ilosc-i;j>0;j--)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf("%c",65+j);
        }
        for(int j=0;j<i-1;j++)
        {
            printf("%c",65+j);  //nie wiem jak zrobiæ odwrócon¹ kolejnoœæ
        }
        printf("\n");
    }
    return 0;
}
