#include<stdio.h>

int main(void) {
	char a[1001];
	
	gets(a);
	
	int cnt = 0;
	while(a[cnt]!='\0') cnt++;
	
	printf("length: %d\n", cnt);
	
	printf("%s\n", a); // 사실 %s도 내부적으로 '\0'이 나올 때까지 가져옴. 
	
	return 0;
}
