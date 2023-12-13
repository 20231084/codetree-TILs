#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt=0;
    while(1)
    {
        if(n==1)
            break;
        if(n%2==1)
            n=3*n+1;
        else
            n=n/2;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}