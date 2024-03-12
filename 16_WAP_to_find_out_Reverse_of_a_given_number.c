#include<stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char str[],int i,int j){
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

void rev(char str[]) {
    int length = strlen(str);
    int i =0,j=length-1;
    while(i<=j){
        swap(str,i,j);
        i++;
        j--;
    }
    printf(" two pointer approach%s",str);
    int n =atoi(str);
    int rev =0;
    while(n!=0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    printf(" re- reverse  of the number is %d",rev);
    
}

int main(int argc, char *argv[]) {
    char str[100];
    strcpy(str, argv[1]);
    rev(str);
}