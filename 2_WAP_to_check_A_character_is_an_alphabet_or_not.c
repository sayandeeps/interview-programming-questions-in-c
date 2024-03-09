#include <stdio.h>

void ischar(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("%c is an alphabet.\n", c);
    }else{
        printf("%c is not an alphabet.\n", c);
    }
}

int main(int argc, char *argv[]){
    char c;
    if(argc ==2){
        c=argv[1][0];
    }
    else{
        printf("Enter a character: ");
        scanf("%c", &c);
    }
    ischar(c);
    
    return 0;
}