#include <stdio.h>

int main() {
    int n;
    int cnt=0;
    scanf("%d", &n);
    while(1)
    {
        if(n>=1000)
            break;
        if(n%2==1)
            n=2*n+2;
        else
            n=3*n+1;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}