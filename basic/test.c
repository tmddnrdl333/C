#include<stdio.h>


int main(void) {
	int a[] = {1,1,1,1,1};
	int b[5] = {2,2,2,2,2};
	int c[5];
	int d[5] = {0,};
	
	int i;
	
	printf("a\tb\tc\td\n");
	for(i=0;i<5;i++) {
		printf("%d\t%d\t%d\t%d\n",a[i], b[i], c[i], d[i]);
	}
	
	return 0;
}
