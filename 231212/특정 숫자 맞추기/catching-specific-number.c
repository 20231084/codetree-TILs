#include <stdio.h>

int main() {
    while(1)
    {
        int n;
        scanf("%d", &n);
        if(n<25)
            printf("Higher\n");
        else if(n>25)
            printf("Lower\n");
        else
        {
            printf("Good\n");
            break;
        }
    }

    return 0;
}