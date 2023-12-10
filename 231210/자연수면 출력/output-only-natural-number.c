#include <stdio.h>

int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);
    if(a>=1)
    {
        for(i=1; i<=b; i++)
            printf("%d", a);
    }
    else
    {
        printf("0");
    }
    return 0;
}