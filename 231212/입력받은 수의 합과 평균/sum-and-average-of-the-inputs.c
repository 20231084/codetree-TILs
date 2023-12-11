#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int sum=0;
    for(i=0; i<n; i++)
    {
        int score;
        scanf("%d", &score);
        sum+=score;
    }
    double avg=(double)sum/n;
    printf("%d %.1f", sum, avg);
    return 0;
}