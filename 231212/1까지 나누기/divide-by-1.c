#include <stdio.h>

int main() {
    int n, i;
    int cnt=0;
    scanf("%d", &n);
    for(i=1; i<=100; i++)
    {
        if(n<=1)
        {
            printf("%d", cnt);
            break;
        }
        n/=i;
        cnt++;
    }
    return 0;
}