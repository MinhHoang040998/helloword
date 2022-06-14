#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pin;
	int cardid;
	int Menu;
	
	printf("nhap ma pin:\n");
	scanf("%d", &pin);
	
	printf("nhap ma the:\n");
	scanf("%d", &cardid);
	
	if(pin == 123 && cardid == 456){
		printf("Menu:\n");
		printf("1.Rut tien:\n");
		printf("2.Chuyen khoan:\n");
		printf("3.Xem so du:\n");
		printf("4.Exit\n");
		printf("Moi ban lua chon:\n");
		scanf("%d", &Menu);
	}
	
	    if( Menu == 1){
		printf("Day la chuc nang rut tien\n");
	}
		else if( Menu == 2){
		printf("Day la chuc nang chuyen khoan\n");
	}
	
		else if( Menu == 3){
		printf("Day la chuc nang xem so du\n");
	}
	
		else if( Menu == 4){
		printf("Day la chuc nang exit\n");
	}
		
	else{
		printf("Exit\n");
	}
	
	return 0;
}
