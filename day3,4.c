/*4. Write a C program, which will print two digit numbers whose sum of both digit is 
multiple of seven. e.g. 16,25,34...... */


#include<stdio.h>


int main() {

    int n, a, b, sum;

    printf("enter the number \n");
    scanf("%d", &n);

    a=n%10;
    b=n/10;
    sum=a+b;

    if(a+b == 7) {
        printf("Number is sum of %d \n", sum);
    }
    else {
        printf("Not a sum of 7\n");
    }

    return 0;

}