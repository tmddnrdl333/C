#include <stdio.h>
#include <math.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	// 1-2 2-4 3-8

	printf("%.0f", pow(pow(2,N)+1,2));

	return 0;
}
