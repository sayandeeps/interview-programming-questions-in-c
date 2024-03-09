#include <stdio.h>
#include <string.h>
void ischar(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        printf("%c is a vowel.\n", c);
    } else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("%c is a consonant.\n", c);
    }else if(c>='1'&&c<='9'){
        printf("%c is a digit.\n", c);
    }
    else{
        printf("%c is a special character.\n", c);
    
    }
}
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    ischar(c);
    return 0;
}