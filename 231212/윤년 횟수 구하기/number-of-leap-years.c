#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int cnt=0;
    for(i=1; i<=n; i++)
    {
        if((i%4==0 && i%100!=0) || i%400==0)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}