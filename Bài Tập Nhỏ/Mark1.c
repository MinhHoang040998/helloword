#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1;
	int num2;
	int sum;
	
	printf("num1=");
	scanf("%d",&num1);
	
	printf("num2=");
	scanf("%d",&num2);
	
	sum = num1+ num2;
	
	printf("sum=%d",sum);
	
	return 0;
}

