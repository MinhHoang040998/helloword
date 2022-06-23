#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
float Div(int a, int b);
int main() {
	int x,y;
	char ch;
	
	printf("\nx=");
	scanf("%d",&x);
	printf("\ny=");
	scanf("%d",&y);
	printf("\nNhap phep tinh (+, -, *, /):");
	fflush(stdin);
	scanf("%c",&ch);
	
	
	switch(ch){
		case '+':
			printf("\n%d + %d = %d",x,y,Add(x, y));
			break;
		case '-':
			printf("\n%d - %d = %d",x,y,Sub( x,  y));
			break;
		case '*':
			printf("\n%d * %d = %d",x,y,Mul( x,  y));
			break;
		case '/':
			printf("\n%d / %d = %2.f",x,y,Div( x,  y));
			break;
		default:
			printf("\nPhep tinh khong dung");
			break;
	}
	return 0;
}
	int Add(int a, int b){
		int c = a + b;
		return c;
	}
	int Sub (int a, int b){
		int c = a - b;
		return c;
	}
	int Mul (int a, int b){
		int c = a * b;
		return c;
	}
	float Div(int a, int b){
		int c = (float)a/b;
		return c;
	}




