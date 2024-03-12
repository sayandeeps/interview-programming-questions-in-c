#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[]){
    int n;
    if(argc==2){
        n = atoi(argv[1]);
    }
    else{
    printf("Enter a number: ");
    scanf("%d",&n);
    }
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}