#include<stdio.h>
#include<stdlib.h>

int main(void) {
	
	int *pi; // Pointer Integer
	pi = (int*) malloc (sizeof(int)); // malloc : 메모리를 할당하라.
	
	if(pi == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1); // 프로그램 종료 
	}
	*pi = 100;
	printf("%d\n", *pi);
	
	free(pi); // 동적 메모리를 사용한 후에는 무조건 해당 메모리를 반환합니다. 
	return 0;
}
