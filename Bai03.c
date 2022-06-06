#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	int Sum;
	int Sub;
	int Mub;
	int Div;
		
	printf("Nhap so num1:");
	scanf("%d", &num1);

	printf("Nhap so num2:");
	scanf("%d", &num2);	 
 	
 	Sum = num1 + num2;
 	Sub = num1 - num2;
 	Mub = num1*num2;
 	Div = num1/num2;
 	
 	printf("Tong : %d \n",Sum);
 	printf("Hieu : %d \n",Sub);
 	printf("Tich : %d \n",Mub);
 	printf("Thuong : %d \n",Div);
 	
 	getch();
 		
	return 0;
}
