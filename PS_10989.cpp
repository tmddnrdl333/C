#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	int N;
	int i, j;
	int num;
	
	int count[10001] = {0,};
	
	scanf("%d", &N);
	
	for(i=0;i<N;i++) {
		scanf("%d", &num);
		count[num]++;
	}
	
	for(i=1;i<10001;i++){
		for(j=1;j<=count[i];j++) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}
