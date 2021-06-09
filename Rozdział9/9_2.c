#include <stdio.h>
#include <stdlib.h>
void rzad_zn(char,int,int);
int main()
{
    char znak;
    int i,j;
    scanf("%c",&znak);
    scanf("%d",&i);
    scanf("%d",&j);
    rzad_zn(znak,i,j);
    return 0;
}
void rzad_zn(char ch,int i,int j)
{
    for(int a=0;a<i;a++)
    {
        for(int b=0;b<j;b++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
