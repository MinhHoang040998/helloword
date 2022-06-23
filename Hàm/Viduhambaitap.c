#include <stdio.h>
#include <stdlib.h>
//Tinh tong tien
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float Mul(int a, int b);

int main () {
	int Qty,Price;
	float Tongtien;
	
	printf("\nQty=");
	scanf("%d",&Qty);
	printf("\nPrice=");
	scanf("%d",&Price);
	
	printf(" %d * %d = %.2f", Qty, Price, Mul( Qty,  Price));
	return 0;
}
float Mul(int a, int b){
	float c = a*b;
	return c;
}

