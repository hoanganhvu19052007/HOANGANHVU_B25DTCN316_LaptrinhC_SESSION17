#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char name[100];
	int i, choice;
	printf("\nMoi ban nhap chuoi ki tu vao ban phim: ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name,"\n")] = '\0';
	int len = strlen(name);
	do{
		
	
		printf("\n---------------MENU---------------\n");
		printf("1. Toan bo chu thuong thanh chu hoa\n");
		printf("2. Toan bo chu hoa thanh chu thuong\n");
		printf("Moi ban chon chuc nang: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				for(i = 0 ; i < len ; i++){
					name[i] = toupper(name[i]);
				}
				printf("%s", name);
				break;
			case 2:
				for(i = 0; i < len ; i++){
					name[i] = tolower(name[i]);
				}
				printf("%s", name);
				break;
			case 3:
				break;
			default:
				printf("Vui long chon 1 trong 2 menu tren");
		}
	}while(choice != 3);
	
	return 0;
}
