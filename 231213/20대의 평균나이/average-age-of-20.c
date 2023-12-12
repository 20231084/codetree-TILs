#include <stdio.h>

int main() {
    int sum=0;
    int cnt=0;
    while(1)
    {
        int n;
        scanf("%d", &n);
        if(n>=30 || n<=19)
        {
            printf("%.2f", (double)sum/cnt);
            break;
        }
        sum+=n;
        cnt++;
    }
    return 0;
}