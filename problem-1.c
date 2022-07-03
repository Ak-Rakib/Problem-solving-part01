//1. Write a C program to accept two integers and check whether they are equal or not.

#include <stdio.h>
int main(){
    int num1, num2;

    printf("\nEnter First intiger number: ");
    scanf("%d",&num1);

    printf("\nEnter Second intiger number: ");
    scanf("%d",&num2);

    if(num1 == num2){
        printf("\nThey are equal");
    } else{
        printf("\nThey are not equal");
    }
     return 0;
}