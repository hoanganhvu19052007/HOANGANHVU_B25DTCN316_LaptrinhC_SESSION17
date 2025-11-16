#include<stdio.h>
#include<string.h>

int findSubstring(char str[], char substr[]){
    int i, j;
    int lenStr = strlen(str);
    int lenSubstr = strlen(substr);
    
    if(lenSubstr > lenStr){
        return 0;
    }
    
    for(i = 0; i <= lenStr - lenSubstr; i++){
        j = 0;
        while(j < lenSubstr && str[i + j] == substr[j]){
            j++;
        }

        if(j == lenSubstr){
            return 1;
        }
    }
    
    return 0;
}

int main(){
    char strA[1000];
    char strB[100];
    
    printf("Nhap vao chuoi A: ");
    fgets(strA, sizeof(strA), stdin);
    strA[strcspn(strA, "\n")] = '\0';
    
    printf("Nhap vao chuoi B: ");
    fgets(strB, sizeof(strB), stdin);
    strB[strcspn(strB, "\n")] = '\0';
    
    if(strstr(strA, strB) != NULL){
        printf("Co\n");
    } else {
        printf("Khong\n");
    }
    return 0;
}



