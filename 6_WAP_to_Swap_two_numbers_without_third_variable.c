#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[]){
    int a, b;
    if(argc==3){
        a=atoi(argv[1]);
        b=atoi(argv[2]);
    }
    else{
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
    }
    printf("Before swapping: a=%d, b=%d\n", a, b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping: a=%d, b=%d\n", a, b);
    return 0;
}