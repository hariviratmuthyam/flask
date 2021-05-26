#include<stdio.h>
#include<stdlib.h>
void main()
{int a;
	printf("do you like to start testing ? \n");
	printf("enter 1 to start 0 to abort\n");
	scanf("%d",&a);
	if(a==0){
		printf("testing aborted");
	}
	else if(a==1){
		system("pytest");
	}
	else{
		printf("wrong choice");
	}
}