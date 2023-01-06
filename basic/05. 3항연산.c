#include<stdio.h> 

int main(void) {

	int x = 50, y = 30;
	
	int max = x>y?x:y;
	int min = x<y?x:y;
	
	printf("max : %d\n", max);
	printf("min : %d\n", min);
	
	return 0;
}

