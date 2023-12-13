#include <stdio.h>

int main() {
    int n;
    double grade, sum = 0, avg;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%lf", &grade);
        sum += grade;
    }
    
    avg = sum / n;
    printf("%.1lf\n", avg);
    
    if (avg >= 4.0) {
        printf("Perfect");
    } else if (avg >= 3.0) {
        printf("Good");
    } else {
        printf("Poor");
    }

    return 0;
}