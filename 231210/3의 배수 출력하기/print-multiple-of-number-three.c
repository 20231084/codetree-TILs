#include <stdio.h>

int main() {
    int i=3, n;
    scanf("%d", &n);
    while(i<=n)
    {
        printf("%d ", i);
        i+=3;
    }
    return 0;
}