#include <stdio.h>
#include <stdlib.h>
void wytnijzn_c(char *nap1, char *nap2)
{
    char tab[strlen(nap1)+1];
    int i,x=0;
    for(i=0;i<strlen(nap1);i++)
    {
        for(int j=0;j<strlen(nap2);j++)
        {
            if(nap1[i]==nap2[j])
            {
                nap1[i]=' ';
            }
        }
    }
    i=0;
    int j=0;
    while(i<strlen(nap1))
    {
        if(nap1[i]!=' ')
        {
            tab[j]=nap1[i];
            j++;
        }
        i++;
    }
    tab[i]=0;
    strcpy(nap1,tab);
    puts(nap1);
}
int main()
{
    char nap1[]="ABCDEF";
    char nap2[]="CD";
    wytnijzn_c(nap1,nap2);
    return 0;
}
