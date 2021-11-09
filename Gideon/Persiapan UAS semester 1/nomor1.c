#include<stdio.h>
#include<stdlib.h>

void swap(int *, int *);

int main(){
    int *num1, *num2;
    
    num1 =(int *) malloc(sizeof(int));
    num2 =(int *) malloc(sizeof(int));

    printf("Enter the first number: ");
    scanf("%d", num1);
    printf("Enter the second number: ");
    scanf("%d", num2);

    swap (num1, num2);

    printf("First number : %d\n", *num1);
    printf("Second number : %d\n", *num2);

    return 0;
}

void swap (int * x, int * y){
    int temp = *y;
    *y = *x;
    *x = temp;
}
