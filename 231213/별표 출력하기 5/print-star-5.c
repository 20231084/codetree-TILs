#include <stdio.h>

int main() {
    int n, i, j, k;
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            for(k=1; k<=i; k++)
                printf("*");
            printf(" ");
        }
            printf("\n");
    }
    return 0;
}