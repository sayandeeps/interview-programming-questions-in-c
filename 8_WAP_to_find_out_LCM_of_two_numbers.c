#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int a, b, lcm;
    if(argc==3){
        a=atoi(argv[1]);
        b=atoi(argv[2]);
    }
    else{
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
    }

    return 0;
}