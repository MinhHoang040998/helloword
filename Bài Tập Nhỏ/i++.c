#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int a;
	
	scanf("%d",&i);
	printf("nhap so i:\n");
	
	a=++i%7;
	
	printf("a= %d\n",a);
	printf("i= %d", i);
	
	return 0;
}
