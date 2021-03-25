#include <stdio.h>
#include <stdlib.h>
void przypisanie(int n,int *w)
{
    *w=n;
}
int main()
{
    int n,w;
    scanf("%d %d",&n,&w);
    przypisanie(n,&w);
    printf("\n%d %d",n,w);
    return 0;
}
