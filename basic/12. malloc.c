#include<stdio.h>
#include<stdlib.h>

int main(void) {
	
	int *pi; // Pointer Integer
	pi = (int*) malloc (sizeof(int)); // malloc : �޸𸮸� �Ҵ��϶�.
	
	if(pi == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1); // ���α׷� ���� 
	}
	*pi = 100;
	printf("%d\n", *pi);
	
	free(pi); // ���� �޸𸮸� ����� �Ŀ��� ������ �ش� �޸𸮸� ��ȯ�մϴ�. 
	return 0;
}
