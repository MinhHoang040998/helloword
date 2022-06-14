#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int hoc;
	int nghi;
	int lythuyet;
	int thuchanh;
	int baitaplon;
	
	printf("nhap so buoi hoc:\n");
	printf("nhap so buoi nghi:\n");
	
	
	scanf("%d,d", &hoc, &nghi);
	
	if(nghi<= hoc*0.25){
		
		printf("ban da du dieu kien thi\n");
		printf("nhap so diem mon ly thuyet\n");
		printf("nhap so diem mon thuc hanh\n");
		printf("nhap so diem mon bai tap lon\n");
		
		scanf("%d",&lythuyet);
		scanf("%d",&thuchanh);
		scanf("%d",&baitaplon);
		
		if(lythuyet>20*0.4){
			printf("Ban da dat ly thuyet\n");
		}
		else{
			printf("Ban da truot\n");
		}
		
		if(thuchanh>15*0.4){
			printf("Ban da dat thuc hanh\n");
		}
		else{
			printf("Ban da bi truot\n");
		}
		if(baitaplon>10*0.4){
			printf("Ban da dat bai tap lon");
		}
		else{
			printf("Ban da bi truot");
		}
		
		
	}
		else{
			printf("Ban khong du dieu kien thi");
	
	    return 0;
   }
}
