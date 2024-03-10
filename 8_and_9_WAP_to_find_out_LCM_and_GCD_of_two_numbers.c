#include <stdio.h>
#include <stdlib.h>
int hcf(int a , int b){
if(b==0){
    return a;
}
else{
    return hcf(b, a%b);
}
}
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
    printf("hfc is %d\n", hcf(a, b));
    printf("LCM is %d\n", (a*b)/hcf(a, b));

    return 0;
}