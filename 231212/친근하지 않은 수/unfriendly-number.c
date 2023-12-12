#include <stdio.h>

int main() {
    int n, i;
    int cnt=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0 || i%3==0 || i%6==0)
            continue;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}