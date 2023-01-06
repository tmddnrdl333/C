#include<stdio.h>
#include<stdlib.h>

int main(void) {
	
	char *pc = NULL;
	
	pc = (char*) malloc (sizeof(char)*100);
	
	if(pc==NULL) {
		printf("메모리 할당 실패.\n");
		exit(1);
	}
	
	int i;
	for(i=0;i<26;i++) {
		*(pc+i) = 'a'+i;
	}
	*(pc+i) = 0; // ASCII 0 : NULL

	printf("%s\n",pc);
	
	free(pc);
	
	return 0;
} 
