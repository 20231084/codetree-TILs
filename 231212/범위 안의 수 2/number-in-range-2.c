#include <stdio.h>

int main() {
    int num, i;
    int sum=0, cnt=0;
    double avg;
    for(i=1; i<=10; i++)
    {
        scanf("%d", &num);
        if(num>=0 && num<=200)
        {
            sum+=num;
            cnt++;
        }
    }
    avg=(double)sum/cnt;
    printf("%d %.1f", sum, avg);
    return 0;
}