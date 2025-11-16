#include<stdio.h>
#include<string.h>

int isPalindrome(char str[]){
    int i, len;
    len = strlen(str);
    
    for(i = 0; i < len / 2; i++){
        if(str[i] != str[len - 1 - i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[100];
    
    printf("Nhap chuoi can kiem tra: ");
    fgets(str, sizeof(str), stdin);
    
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
    
    if(isPalindrome(str)){
        printf("La palindrome\n");
    } else {
        printf("Khong phai palindrome\n");
    }
    
    return 0;
}


