#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char Class[10];
	char RolNo[10];
	char FullName[100];
	char Email[100];
	int Phone;
	
	printf("Class:\n");
	scanf("%s",&Class);
	
	printf("RolNo:\n");
	scanf("%s",&RolNo);
	
	printf("FullName:\n");
	scanf("%s",&FullName);
	
	printf("Email:\n");
	scanf("%s",&Email);
	
	printf("Phone:\n");
	scanf("%d",&Phone);
	
	
	return 0;
}
