#include <stdio.h>
#include <stdlib.h>

int dr[] = {0,0,-1,1};
int dc[] = {1,-1,0,0};

int N;
char** map;

int cnt = 0;
int* cnts;

int DFS(int r, int c) {
	if(map[r][c] == '0') return 0;
	cnts[cnt]++;
	map[r][c] = '0';
	
	for(int d=0;d<4;d++) {
		int nr = r+dr[d];
		int nc = c+dc[d];
		if(nr==-1||nc==-1||nr==N||nc==N) continue;
		if(map[nr][nc]=='0') continue;
		DFS(nr,nc);
	}

	return 1;
}

int compare(const void *a, const void *b) {
	if( *(int*)a > *(int*)b ) return 1;
	else if ( *(int*)a < *(int*)b ) return -1;
	else return 0;
}

int main(void)
{
	scanf("%d", &N);

	map = (char**) malloc ( (sizeof(char*) * N ));
	for(int i=0;i<N;i++) {
		map[i] = (char*) malloc ( (sizeof(char) * N ));
	}

	cnts = (int*) malloc ( (sizeof(int*) * N * N));
	
	for(int i=0;i<N;i++) {
		scanf("%s", map[i]);
	}

	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			if(DFS(i,j)==1) cnt++;
		}
	}

	printf("%d\n",cnt);

	qsort(cnts,N*N,(sizeof(int)),compare);

	for(int i=N*N-cnt;i<N*N;i++) {
		printf("%d\n",cnts[i]);
	}

	return 0;
}
