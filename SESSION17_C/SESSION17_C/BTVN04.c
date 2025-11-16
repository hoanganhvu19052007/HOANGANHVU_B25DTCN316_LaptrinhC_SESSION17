#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char charToDelete;
    int i, j, len;

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    printf("Nhap vao mot ky tu can xoa: ");
    scanf("%c", &charToDelete);
    
    len = strlen(str);
    
    j = 0;
    for(i = 0; i < len; i++){
        if(str[i] != charToDelete){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    
    printf("Chuoi sau khi da xoa ky tu '%c': %s\n", charToDelete, str);
    
    return 0;
}


