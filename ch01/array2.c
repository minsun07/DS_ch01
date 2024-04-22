#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000000  //동적할당 할 때에 크기를 정해주기 위해서 사용(간단한 코드를 쓰기 위해 사용했음)

int main(void) {
	int* a = (int*)malloc(sizeof(int) * SIZE);
	a[0] = 10;
	printf("%d\n", a[0]);
	free(a);  //동정 할당은 사용 후, 항상 할당 래제(소멸)하여야 함
	return 0;
}