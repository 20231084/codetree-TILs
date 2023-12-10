#include <stdio.h>

int main() {
    int i;
    int cnt=0;
    for(i=1; i<=10; i++)
    {
        if(i%2==1)
        {
            cnt++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}