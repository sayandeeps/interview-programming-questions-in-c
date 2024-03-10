#include <stdio.h>
int main(int argc, char *argv[]){
    char c;
    if (argc==2){
        c=argv[1][0];
    }
    else{
        printf("Enter a character: ");
        scanf("%c", &c);
    }
    printf("The ASCII value of %c is %d.\n", c, c);
}