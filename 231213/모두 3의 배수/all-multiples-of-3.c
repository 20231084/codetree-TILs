#include <stdio.h>
#include <stdbool.h>

int main() {
	// 변수 선언 및 입력
	bool satisfied = true;
	
	for(int i = 1; i <= 5; i++) {
		// 모든 수가 3의 배수인지 확인합니다.
        int a;
        scanf("%d", &a);
		if(a % 3 != 0)
			satisfied = false;
	}

	//출력
	if(satisfied == true)
		printf("1");
	else
		printf("0");
	
    return 0;
}