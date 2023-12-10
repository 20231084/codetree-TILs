#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for(i=n; i<=n*5; i+=n)
    {
        printf("%d ", i);
    }
    return 0;
}