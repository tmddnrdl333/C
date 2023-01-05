#include <stdio.h>
#include <stdlib.h>

// 1,112kb
// 0ms

int main(void) {
	
	int N,m,M,T,R;
	
	scanf("%d %d %d %d %d",&N,&m,&M,&T,&R);
	
	int X = m;
	int time = 0;
	
	while(N!=0) {
		time++;
		if(X+T<=M) {
			X += T;
			N--;
		} else if(X!=m) {
			X = X-R;
			if(X<m) X = m;
		} else {
			time = -1;
			break;
		}
	}
	
	printf("%d",time);
	
	return 0;
}
