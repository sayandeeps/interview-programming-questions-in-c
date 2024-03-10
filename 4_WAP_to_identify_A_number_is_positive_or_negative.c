#include <stdio.h>
#include <stdlib.h>
void isPositive(int n){
    if(n>0){
        printf("%d is a positive number.\n", n);
    }
    else if(n<0){
        printf("%d is a negative number.\n", n);
    }
    else{
        printf("%d is neither positive nor negative.\n", n);
    }
}
int main(int argc , char *argv[]){
    int n;
    if(argc==2){
        n=atoi(argv[1]);
    }
    else{
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    isPositive(n);
}