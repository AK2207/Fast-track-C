#include<stdio.h>

int main() {

    int n, b=0, r=0, c=1;
    printf("Enter a Decimal number: \n");
    scanf("%d", &n);

    while (n>0) {
        r = n %2;
        n = n/2;
        b = b + (r*c);
        c =c*10;

    }
    printf("decimal of binary num is: %d\n",b);
    return 0;

       
       
    }
     

        

