#include<stdio.h>
#include<math.h>

int main() {

    int n, d=0, r=0, c=0;
    printf("Enter a binary number: \n");
    scanf("%d", &n);

    while (n>0) {
        r = n %10;
        d = d + r*(pow(2,c));
        n = n/10;
        c++;
       
    }
     printf("decimal of Decimal num is: %d\n",d);
    return 0;

        
    }
