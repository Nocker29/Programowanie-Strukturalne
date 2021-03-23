#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,operacja;
    printf("Podaj a oraz b\n");
    scanf("%d %d",&a,&b);
    printf("Wybierz numer operacji: \n1-Suma 2-Roznica 3-Iloczyn 4-Iloraz\n");
    scanf("%d",&operacja);
    switch(operacja){
        case 1: printf("%d+%d=%d",a,b,a+b);
                break;
        case 2: printf("%d-%d=%d",a,b,a-b);
                break;
        case 3: printf("%d*%d=%d",a,b,a*b);
                break;
        case 4: printf("%d/%d=%d",a,b,a/b);
                break;
        default: printf("Zle wybrana operacja");
    }
    return 0;
}
