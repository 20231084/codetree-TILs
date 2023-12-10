#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for(i=1; i<=10; i++)
    {
        if(i%2==1 && i%3==0)
        printf("%d\n", i);
    }
    return 0;
}