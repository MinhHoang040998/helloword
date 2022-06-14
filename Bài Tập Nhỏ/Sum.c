#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int integer1;
	int integer2;
	int integer3;
	int avg;
	
	printf("Toan\n");
	scanf("%d", &integer1);
	printf("Ly\n");
	scanf("%d", &integer2);
	printf("Hoa\n ");
	scanf("%d", &integer3);
	avg = (integer1 + integer2 + integer3)/3;
	printf(" (%d + %d + %d)/3 = %d",integer1, integer2 ,integer3, avg);
	return 0;
}
