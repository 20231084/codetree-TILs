#include <stdio.h>

int main() {
    int a, b, i;
    scanf("%d %d", &b, &a);
    for(i=b; i>=a; i-=2)
    {
        printf("%d ", i);
    }
    return 0;
}