#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int IsEvenNumber(int a);

int main(){
	int a;
	int b;
	int i;
	
	printf("Please enter the number a:\n");
	scanf("%d",&a);
	printf("Please enter the number b:\n");
	scanf("%d",&b);
	
	for ( i= a ; i<= b; i++ ){
		if(i % 2 == 0 && i >0){
		printf("Number Between a and b is:%d\n",i);
	} 	
}
	
	if(IsEvenNumber(a) == 1){
	printf("This is Even\n");
	}else
	printf("This is not Even\n");		
}

int IsEvenNumber(int a){
	if (a % 2 == 0 && a > 0){
	return 1;
	}
	else {
	return 0;
	}				
}

