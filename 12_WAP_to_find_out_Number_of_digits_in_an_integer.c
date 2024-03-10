#include <stdio.h>
#include <stdlib.h>
void countDigit(int n){
    int c=0;
    while(n!=0){
        c++;
        n=n/10;
    }
    printf("%d",c);
}
int main(int argc , char *argv[]){
    int n;
    if(argc == 2){
        n=atoi(argv[1]);
    }else{
        scanf("%d",&n);
    }
    countDigit(n);

}