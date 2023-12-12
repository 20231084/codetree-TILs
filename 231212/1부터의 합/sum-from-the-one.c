#include <stdio.h>

int main() {
    int n, i;
    int sum=0;
    scanf("%d", &n);
    for(i=1; i<=100; i++)
    {
        sum+=i;
        if(sum>=n)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}