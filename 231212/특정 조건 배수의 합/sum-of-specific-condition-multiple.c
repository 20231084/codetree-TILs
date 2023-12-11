#include <stdio.h>

int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);
    int sum=0;
    if(a<=b)
    {
        for(i=a; i<=b; i++)
        {
            if(i%5==0)
            {
                sum+=i;
            }
        }
    }
    else
    {
        for(i=b; i<=a; i++)
        {
            if(i%5==0)
            {
                sum+=1;
            }
        }
    }
    printf("%d", sum);
    return 0;
}