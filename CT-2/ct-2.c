#include<stdio.h>

int main(){

    int a, b, c;

    printf("Enter the first value\n\n");

    scanf("%d",&a);

    printf("Enter the second value\n\n");

    scanf("%d",&b);

    c = a + b;

    printf("The summation of %d and %d are:-%d",a, b, c);

    return 0;

}