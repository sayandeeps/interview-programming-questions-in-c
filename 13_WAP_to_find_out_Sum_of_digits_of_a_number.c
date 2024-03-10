#include <stdio.h>
#include <stdlib.h>
void sumDigit(int n){
    int c=0;
    while(n!=0){
        int a = n%10;
        c+=a;
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
    sumDigit(n);

}