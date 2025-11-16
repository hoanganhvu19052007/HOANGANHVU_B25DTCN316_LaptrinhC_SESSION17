#include<stdio.h>
#include<string.h>
#include<ctype.h>

int kiemTra(char str1[], char str2[]){
    int i;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2){
        return 0;
    }

    for(i = 0; i < len1; i++){
        if(tolower(str1[i]) != tolower(str2[i])){
            return 0;
        }
    }
    
    return 1;
}

int main(){
    char str1[100], str2[100];
    
    printf("Nhap vao chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Nhap vao chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    if(kiemTra(str1, str2)){
        printf("Giong nhau\n");
    } else {
        printf("Khac nhau\n");
    }
    
    return 0;
}


