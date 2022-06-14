#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float S1;//dien tich hinh tron
	int R;//ban kinh hinh tron
	float C;//chu vi hinh tron
	float pi = 3.14;
	int S2;//dien tich hinh vuong
	int a;//canh hinh vuong
	int S3;//dien tich hinh chu nhat
	int a1;//chieu dai hinh chu nhat
	int b;//chieu rong hinh chu nhat
	
	printf("Ban kinh hinh tron:\n");
	scanf("%d",&R);
	
	printf("Canh hinh vuong:\n");
	scanf("%d",&a);
	
	printf("Chieu dai hinh chu nhat:\n");
	scanf("%d",&a1);
	
	printf("Chieu rong hinh chu nhat:\n");
	scanf("%d",&b);
	
	S1=R*R*pi;
	
	C=2*R*pi;
	
	S2=a*a;
	
	S3=a1*b;
	
	printf("Dien tich hinh tron: %f \n",S1);
	printf("Chu tich hinh tron: %f \n",C);
	printf("Dien tich hinh vuong: %d \n",S2);
	printf("Dien tich hinh chu nhat: %d \n",S3);
	
	getch();
	
	return 0;
}
