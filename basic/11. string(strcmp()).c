#include<stdio.h>
#include<string.h>

int main(void) {
	
	// 01. strlen
	
	char input1[5] = "asdf";
	
	printf("strlen : %d\n", strlen(input1));
	
	// 02. strcmp
	
	char input2[5] = "A";
	char input3[5] = "B";
	
	printf("strcmp : %d\n", strcmp(input2,input3));
	
	
	char input4[10] = "I love you";
	char input5[5] = "Love";
	
	strcpy(input5, input4);
	
	printf("strcpy : %s\n", input5);
	
	return 0;	
}
