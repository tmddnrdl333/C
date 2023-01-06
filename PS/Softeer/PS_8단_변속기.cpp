#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void) {
	int* a;
	a = (int*)malloc((sizeof(int)*8));
	scanf("%d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
	
	if (a[0]==1) {
		bool flag = true;
		for(int i=1;i<8;i++) {
			if(a[i]!=i+1) {
				flag = false;
				break;
			}
		}
		if(flag) {
			printf("ascending");
		} else {
			printf("mixed");
		}
	} else if (a[0]==8) {
		bool flag = true;
		for(int i=1;i<8;i++) {
			if(a[i]!=8-i) {
				flag = false;
				break;
			}
		}
		if(flag) {
			printf("descending");
		} else {
			printf("mixed");
		}
	} else {
		printf("mixed");
	}
	return 0;
}
