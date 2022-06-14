#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int top;
	int bottom;
	int height;
	int S;
	
	printf("Nhap top:\n");
	scanf("%d",&top);
	
	printf("Nhap bottom:");
	scanf("%d",&bottom);
	
	printf("Nhap height:");
	scanf("%d",&height);
	
	S=(bottom+top)/2*height;
	
	printf("Ket qua S: %d \n",S);
	
	getch();
	
	return 0;
}
