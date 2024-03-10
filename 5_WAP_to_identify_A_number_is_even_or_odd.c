#include <stdio.h>
#include <stdlib.h>
void isEven(int n){
    if(n%2==0){
        printf("%d is an even number.\n", n);
    }
    else{
        printf("%d is an odd number.\n", n);
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
    isEven(n);
} 