#include <stdio.h>
#include <stdlib.h>
int ciag(int n)
{
    if(n==0)
        return 1;
    else
        return 2*ciag(n-1)+5;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",ciag(n-1));
    return 0;
}
