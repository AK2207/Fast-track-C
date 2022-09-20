#include<stdio.h>

int main() {

    int binary, decimal=0, base=1, rem, num;
    printf("Enter a binary number: \n");
    scanf("%d", &binary);

    num=binary;

    while (binary !=0) {
        rem = binary %10;
        decimal = decimal + rem*base;
        binary = binary/10;
        base = base*2;
    }

    printf("decimal of binary num %d is: %d\n",num, decimal);
    return 0;



}
