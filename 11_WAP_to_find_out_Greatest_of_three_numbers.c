#include <stdio.h>
#include <stdlib.h>
void greatest(int a , int b, int c){
    printf("Greatest number is %d\n", (a>b)?( (a>c) ? a : c ): ((b>c)? b : c ) );
}
int main(int argc , char *argv[]){
    int a, b, c;
    if(argc==4){
        a=atoi(argv[1]);
        b=atoi(argv[2]);
        c=atoi(argv[3]);
    }
    else{
        printf("Enter three numbers: ");
        scanf("%d %d %d", &a, &b, &c);
    }
    greatest(a,b,c);
    
}