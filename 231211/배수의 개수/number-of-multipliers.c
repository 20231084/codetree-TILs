#include <stdio.h>

int main() {
    int a, i, cnt3=0, cnt5=0;
    for(i=1; i<=10; i++)
    {
        scanf("%d", &a);
        if(a%3==0)
            cnt3++;
        if(a%5==0)
            cnt5++;
    }
    printf("%d %d", cnt3, cnt5);
    return 0;
}