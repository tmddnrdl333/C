#include<stdio.h>
#include<stdlib.h>

struct Book {
	int number;
	char title[100];
};

void showBook(struct Book *p, int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("No.%d : %s\n", (p+i)->number, (p+i)->title);
	}
}

int main(void) {
	struct Book *p;
	p = (struct Book*) malloc (sizeof(struct Book) * 2);
	if(p == NULL) exit(1);
	
	p->number = 1;
	strcpy(p->title, "C Programming");
	
	(p+1)->number = 2;
	strcpy((p+1)->title, "Data Structure");
	
	showBook(p,2);
	
	free(p);
	
	return 0;
}
