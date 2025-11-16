#include<stdio.h>
#include<string.h>

int main(){
	char str1[100], str2[100];
	printf("Moi ban nhap vao chuoi thu nhat: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = 0;
	printf("Moi ban nhap vao chuoi thu hai: ");
	fgets(str2, sizeof(str2), stdin);
	strcat(str1, str2);
	printf("Chuoi sau khi noi la: %s' '", str1);
	
	return 0;
}
