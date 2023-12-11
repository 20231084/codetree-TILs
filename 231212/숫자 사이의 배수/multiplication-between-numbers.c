#include <stdio.h>

int main() {
    int a, b, i;
    int sum=0, cnt=0;
    double avg;

    scanf("%d %d", &a, &b);
    for(i=a; i<=b; i++)
    {
        if(i%5==0 || i%7==0)
        {
            sum+=i;
            cnt++;
        }
    }
    avg=(double)sum/cnt;
    printf("%d %.1f", sum, avg);
    return 0;
}