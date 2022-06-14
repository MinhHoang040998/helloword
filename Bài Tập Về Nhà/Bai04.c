#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int C;
	float F;
	
	printf("Nhap do C:\n");
	scanf("%d",&C);
	
	
	F=(C/5)*9 + 32;
	
	printf("F: %f \n",F);
	
	getch();
	
	return 0;
}
