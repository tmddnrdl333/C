#include<stdio.h>

int main(void) {
	char a[1001];
	
	gets(a);
	
	int cnt = 0;
	while(a[cnt]!='\0') cnt++;
	
	printf("length: %d\n", cnt);
	
	printf("%s\n", a); // ��� %s�� ���������� '\0'�� ���� ������ ������. 
	
	return 0;
}
