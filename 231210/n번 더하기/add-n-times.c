#include <stdio.h>

int main() {
    int a, n, i;
    scanf("%d %d", &a, &n);
    for(i=1; i<=n; i++)
    {
        a+=n;
        printf("%d\n", a);
    }
    return 0;
}