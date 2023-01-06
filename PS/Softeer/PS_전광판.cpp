#include <stdio.h>
#include <math.h>

int digit[10][7] = {{1,1,1,0,1,1,1},{0,0,1,0,0,1,0},{1,0,1,1,1,0,1},{1,0,1,1,0,1,1},
{0,1,1,1,0,1,0},{1,1,0,1,0,1,1},{1,1,0,1,1,1,1},{1,1,1,0,0,1,0},{1,1,1,1,1,1,1},
{1,1,1,1,0,1,1}};

int A;
int B;
int a[5][7];
int b[5][7];

void makeArr() {
	// initialize
	for(int i=0;i<5;i++) {
		for(int j=0;j<7;j++) {
			a[i][j] = 0;
			b[i][j] = 0;
		}
	}

	int n;
	// A
	for(n=5;n>0;n--) {
		if(A>=(int)pow(10,n-1)) break;
	}
	int aArr[n]; // n 만큼의 자리가 필요함
	for(int i=0;i<n;i++) {
		int tmp = (int)pow(10,n-i-1);
		aArr[i]=A/tmp;
		A-=aArr[i]*tmp;
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<7;j++) {
			a[5-n+i][j] = digit[aArr[i]][j];
		}
	}
	// B
	for(n=5;n>0;n--) {
		if(B>=(int)pow(10,n-1)) break;
	}
	int bArr[n]; // n 만큼의 자리가 필요함
	for(int i=0;i<n;i++) {
		int tmp = (int)pow(10,n-i-1);
		bArr[i]=B/tmp;
		B-=bArr[i]*tmp;
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<7;j++) {
			b[5-n+i][j] = digit[bArr[i]][j];
		}
	}
}

int exec() {
	makeArr();
	int cnt = 0;
	for(int i=0;i<5;i++) {
		for(int j=0;j<7;j++) {
			if(a[i][j] != b[i][j]) cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	int T;
	scanf("%d",&T);

	for(int i=0;i<T;i++) {
		scanf("%d %d",&A, &B);
		printf("%d\n",exec());
	}

	return 0;
}
