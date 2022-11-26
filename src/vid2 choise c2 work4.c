/*
 ============================================================================
 Name        : vid2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,choice,result;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("1 for addition \n2 for subtraction \n3 for division \n4 for multiplication \n enter your choice");
	scanf("%d",&choice);
	if(choice==1){
		result=a+b;
		printf("result=%d",result);
	}else if(choice==2){
		result=a-b;
		printf("result=%d",result);
	}else if(choice==3){
		result=a/b;
		printf("result=%d",result);
	}else if(choice==4){
		result=a*b;
		printf("result=%d",result);
	}else{
		printf("error number");
	}
	return EXIT_SUCCESS;
}
