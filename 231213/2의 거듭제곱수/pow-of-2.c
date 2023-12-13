#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int prod=1;
    int x=0;
    while(1)
    {
        if(n==prod)
            break;
        prod*=2;
        x++;
    }
    printf("%d", x);

    return 0;
}