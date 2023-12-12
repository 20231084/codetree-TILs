#include <stdio.h>

int main() {
    while(1)
    {
        int num;
        scanf("%d", &num);
        if(num==1)
            printf("John");
        else if(num==2)
            printf("Tom");
        else if(num==3)
            printf("Paul");
        else if(num==4)
            printf("Sam");
        else
        {
            printf("Vacancy");
            break;
        }
    }
    return 0;
}