#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float Mul(int a, int b);

int main() {
	int Qty, price;
	char ch;
	float total=0;
	
	do{	
		printf("\nQty:");
		scanf("%d",&Qty);
		printf("\nprince:");
		scanf("%d",&price);
		printf("%d * %d = %.2f",Qty , price,Mul(Qty , price)); 	
		printf("\nBan co muon tiep tuc[Y/N]:");
		fflush(stdin);
		scanf("%c",&ch);
		
		total += Mul(Qty,price);
			
	}while(ch=='y'||ch=='Y');	
	printf("Ket thuc\n");
	printf("\nTong tien = %f",total);
}
float Mul(int a, int b){
	float c = a * b;
	return c;
}

