#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=15;
	float b=3.456000;
	double c=3.4567891235;
	char d='E';
	long int e;
	long double f; 
	

	
	printf("kieu du lieu:%d\n",sizeof(int));
	printf("So nguyen:%d\n",a);
	
	printf("kieu du lieu:%d\n",sizeof(float));
	printf("So thuc kieu float:%f\n",b);
	
	printf("kieu du lieu:%d\n",sizeof(double));
	printf("So thuc kieu double:%lf\n",c);
	
	printf("kieu du lieu:%d\n",sizeof(char));
	printf("Ky tu :%c\n",d);
	
	printf("kieu du lieu:%d\n",sizeof(long int));
	
	printf("kieu du lieu:%d\n",sizeof(long double));
	
	
	
	return 0;
}
