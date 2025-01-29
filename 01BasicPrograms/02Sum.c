#include<stdio.h>
void main(){
    int num1, num2, sum;
    printf("\nEnter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum of %d and %d is %d", num1, num2, sum);
}