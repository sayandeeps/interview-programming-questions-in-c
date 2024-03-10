#include <stdio.h>
#include <stdlib.h>
void sumN(int n){
    // int c=0;
    // for(int i =1;i<=n;i++){
    //     c+=i;
    // } 
    //the above approach is making the complexity o(n)
    //complexity o(1)
    float s = n/2.0*(2*1+(n-1)*1);
    printf("%f",s);
}
int main(int argc , char *argv[]){
    int n;
    if(argc == 2){
        n=atoi(argv[1]);
    }else{
        scanf("%d",&n);
    }
    sumN(n);

}