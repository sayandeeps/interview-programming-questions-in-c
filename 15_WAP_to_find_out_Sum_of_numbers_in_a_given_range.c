#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[]){
    int s,e;
    if(argc == 3){
        s= atoi(argv[1]);
        e= atoi(argv[2]);
    }else{
        scanf("%d%d",&s,&e);
    }
    float a = e/2.0*(2*s+(e-1)*1);
    printf("%f",a);
}