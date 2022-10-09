/* 5. Write a recursive function for calculating power of a number. Take base number and 
exponent from user */

#include<stdio.h>
#include<math.h>

int main() {

    int n, b, power;

    printf("Enter Base Number \n");
    scanf("%d", &b);
    printf("Enter Exponent number \n");
    scanf("%d", &n);

    if(n != 0){
        power= pow(b, n);   
    }
    else {
        return 1;
    }
    printf("The base power is %d \n", power);
   
}