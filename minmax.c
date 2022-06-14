#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int min;
	int max;
	int i;
	
	printf("nhap so nho nhat:\n");
	scanf("%d",&min);
	
	printf("nhap so lon nhat:\n");
	scanf("%d",&max);
	
	for(i=min; i<=max; i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
		
	return 0;
}
