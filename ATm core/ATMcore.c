#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cardid;
	int pin;
	int i; 
	int count=0; 
	 
	 do{
	 	printf (" Nhap ma pin:\n");
	 	scanf("%d",&pin);
	 	printf (" Nhap ma cardid:\n");
	 	scanf("%d",&cardid);
	 	
	 	if( pin == 123 && cardid == 456){
	 		do{
	 			printf("Menu:\n ");
	 			printf("1.Rut tien:\n ");
	 			printf("2.Chuyen khoan:\n ");
	 			printf("3.Xem so du:\n ");
	 			printf("4.Ket thuc\n ");
	 			printf("Moi ban lua chon\n");
	 			scanf("%d",&i);
	 			
	 			switch(i){
	 				case 1:
	 					printf("Ban dang rut tien\n");
	 					break;
	 				case 2:
					 	printf("Ban dang chuyen tien\n");
						break;
					case 3:
						printf("Ban dang xem so du\n");
						break;
					case 4:
						printf("Ket thuc\n");
						break;	
							
				 }
			 }
			 while( i< 4);
		 }
		 else {
		 	printf ("Ban da nhap sai thong tin\n");
		 	count ++;
		 	if(count<=3){
		 		printf("Moi ban nhap lai\n");
			 }
		 }
	 }
	while(count<=3);

	return 0;
 
}
