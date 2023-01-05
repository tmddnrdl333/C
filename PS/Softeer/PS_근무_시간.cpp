#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int sum = 0;
	
	for(int i=0;i<5;i++) {
		int h1, m1, h2, m2;
		scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
		
		sum += (h2-h1)*60+(m2-m1);
	}
	
	printf("%d",sum);
	
	return 0;
}
