#include <stdio.h>

int main() {
    int i, a;
    int cnt=0;
    for(i=1; i<=10; i++)
    {
        scanf("%d", &a);
        if(a%2==1)
            cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}