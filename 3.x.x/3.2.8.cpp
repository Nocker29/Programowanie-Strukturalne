#include <iostream>
using namespace std;
void funkcja(int &ref_a, int *wsk_b)
{
    int zmienna=ref_a;
    ref_a=*wsk_b;
    *wsk_b=zmienna;
}
int main()
{
    int x=1,y=2;
    printf("%d, %d",x,y);
    funkcja(x,&y);
    printf("\n%d, %d",x,y);
    return 0;
}
