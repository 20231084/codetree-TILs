#include <stdio.h>

int main() {
    int a, b, i;
    int prod=1;
    scanf("%d %d", &a, &b);
    for(i=1; i<=b; i++)
    {
        if(i%a==0)
            prod*=i;
    }
    printf("%d", prod);
    return 0;
}