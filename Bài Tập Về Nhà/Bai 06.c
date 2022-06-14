#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float maths;
	float Physics;
	float Chemistry;
	float sum;
	float average;
	
	printf("Nhap diem toan: \n");
	scanf("%f",&maths);
	printf("Nhap diem ly: \n" );
	scanf("%f", &Physics);
	printf("Nhap diem hoa: \n" );
	scanf("%f", &Chemistry);
	
	sum= maths + Physics + Chemistry;
	average= (maths + Physics + Chemistry)/3;
	
	printf("Ket qua tong diem : %f\n",sum);
	printf("Ket qua diem trung binh : %f\n ",average);
	
	return 0;
}
