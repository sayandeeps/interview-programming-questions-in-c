#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[]){
    float r;
    if(argc==2){
        r=atof(argv[1]);
    }
    else{
        printf("Enter the radius of the circle: ");
        scanf("%f", &r);
    }
    printf("The area of the circle with radius %f is %f.\n", r, 3.14*r*r);
}