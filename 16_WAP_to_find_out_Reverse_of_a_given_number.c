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
    printf("%s",str);
}

int main(int argc, char *argv[]) {
    char str[100];
    strcpy(str, argv[1]);
    rev(str);
}