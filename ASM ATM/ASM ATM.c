#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Login(int username, int password);
int menu();
int Withdraw(int TongTien, int rut);
int Transfer(int id, int TongTien, int chuyentien);
int Check(int TongTien);

int main(){
	int username ;
	int password, count, rut, luachon,chuyentien,id;
	int TongTien = 1000000000;	
	int Sotiennguoinhan;
	
		
	do{
	printf("Vui long nhap ten dang nhap\n");
	scanf("%d",&username);
	printf("Vui long nhap mat khau\n");
	scanf("%d",&password);
	
	if(Login(username , password) == 1){
		printf("Ban da dang nhap thanh cong\n");
		do{
		menu();
		printf("Vui long chon\n");
		scanf("%d",&luachon);
		switch(luachon){
			case 1:
			TongTien = Withdraw(TongTien, rut);
			break;
			case 2:
			TongTien = Transfer(id, TongTien, chuyentien);
			break;
			case 3:
			TongTien = Check(TongTien);
			break;	
			}
		}while(luachon < 3);
	}
	else{
		printf("Ban da dang nhap that bai\n");
		count ++;
	}
}while(count < 3);
	printf("Ban da bi khoa tai khoan\n");	
}

int Login(int username, int password){
	if(username == 123 && password == 456){
		return 1;
	}else return 0;
}
int menu(){
	printf("1.Rut tien\n");
	printf("2.Chuyen tien\n");
	printf("3.Xem so du\n");
	return menu;
}
int Withdraw(int TongTien, int rut){
	int i;
	do{
		printf("Nhap so tien ban muon rut:\n");
		scanf("%d",&rut);
		if( rut%50 == 0 && rut <3000000){
			printf("Ban da rut thanh cong\n");
			TongTien = TongTien - rut;
			printf("So du cua ban la:%d\n",TongTien);
			printf("Ban muon tiep tuc hay khong ?\n");
			printf("Nhap 1 de tiep tuc\n");
		}else
		printf("Ban da nhap sai so tien\n");
		scanf("%d",&i);	
	}while(i == 1);
	return TongTien;
}
int Transfer(int id, int TongTien, int chuyentien){
	int Sotiennguoinhan = 90000;
	int i;
	do{
		printf("Nhap id:\n");
		scanf("%d",&id);
		printf("Thanh\n");
		printf("Nhap so tien ban muon chuyen:\n");
		scanf("%d",&chuyentien);
		if(chuyentien<TongTien && chuyentien > 0){
		TongTien = TongTien - chuyentien;
		printf("So du cua ban la:%d\n",TongTien);
		Sotiennguoinhan = Sotiennguoinhan + chuyentien;
		printf("So tien nguoi nhan la:%d\n",Sotiennguoinhan);
		}else{
			printf("Ban da nhap sai so tien muon chuyen\n");
		}		
		printf("Ban muon tiep tuc hay khong ?\n");
		printf("Nhap 2 de tiep tuc\n");
		scanf("%d",& i);
	}while(i == 2);
	return TongTien;
}
int Check(int TongTien){
	do{
		printf("So tien hien tai cua ban la:%d\n",TongTien);
		break;
	}while(3);
	return TongTien;
}
