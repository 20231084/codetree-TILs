#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    double avg;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        
        if (num >= 250) {
            break;
        }
        
        sum += num;
        count++;
    }
    
    avg = (double) sum / (double) count;
    printf("%d %.1lf", sum, avg);

    return 0;
}