#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    char longestWord[100] = "";
    char currentWord[100] = "";
    int i, j = 0;
    int maxLength = 0;
    int currentLength = 0;
    
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    int len = strlen(str);

    for(i = 0; i <= len; i++){
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\0' || str[i] == '\n'){
            if(currentLength > 0){ 
                currentWord[j] = '\0';
                if(currentLength > maxLength){
                    maxLength = currentLength;
                    strcpy(longestWord, currentWord);
                }
                j = 0;
                currentLength = 0;
                currentWord[0] = '\0';
            }
        } else {
            currentWord[j] = str[i];
            j++;
            currentLength++;
        }
    }
    if(maxLength > 0){
        printf("Tu dai nhat: %s\n", longestWord);
        printf("Do dai: %d\n", maxLength);
    } else {
        printf("Khong co tu nao trong chuoi!\n");
    }
    return 0;
}
