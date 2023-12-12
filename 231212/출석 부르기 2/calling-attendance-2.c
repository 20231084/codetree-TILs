#include <stdio.h>

int main() {
    while(1)
    {
        int num;
        scanf("%d", &num);
        if(num==1)
            printf("John\n");
        else if(num==2)
            printf("Tom\n");
        else if(num==3)
            printf("Paul\n");
        else if(num==4)
            printf("Sam\n");
        else
        {
            printf("Vacancy\n");
            break;
        }
    }
    return 0;
}