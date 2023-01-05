#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int T;
	int *arr;
	arr = (int*)malloc((sizeof(int))*T);
	
	scanf("%d",&T);
	
	for(int i=0;i<T;i++) {
		int A, B;
		scanf("%d %d",&A,&B);
		arr[i] = (A+B);
	}
	
	for(int i=0;i<T;i++) {
		printf("Case #%d: %d\n",(i+1),arr[i]);
	}
	return 0;
}
