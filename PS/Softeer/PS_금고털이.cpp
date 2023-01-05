#include <stdio.h>
#include <stdlib.h>

int comp(const void* elem1, const void* elem2) {
	int f = *((int*)elem1);
	int s = *((int*)elem2);
	if (f>s) return 1;
	if (f<s) return -1;
	return 0;
}

int main(void)
{
	int W, N;
	scanf("%d %d", &W, &N);

	int *M, *P;
	M = (int*)malloc((sizeof(int))*N);
	P = (int*)malloc((sizeof(int))*N);

	for(int i=0; i<N; i++) {
		scanf("%d %d", &M[i], &P[i]);
	}


	
	int gold = 0;
	int i = N-1;
	while(W!=0) {
		if(M[i]>=W) {
			gold += P[i]*W;
			break;
		} else {
			gold += P[i]*M[i];
			W -= M[i];
			i--;
		}
	}
	
	printf("%d",gold);
	
	return 0;
}
