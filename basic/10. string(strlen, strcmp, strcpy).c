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
	
	// 03. strcpy
	 
	char input4[10] = "I love you";
	char input5[5] = "Love";
	
	strcpy(input5, input4); // 5에 4를 copy함. (포인터로 동작하기 때문에 [5]였어도 정상 작동함) 
	
	printf("strcpy : %s\n", input5);
	
	return 0;	
}
