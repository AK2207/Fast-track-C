#include<stdio.h>

int main() {

    int n, a=0, b=0, c=1, d, i;
    printf("Enter a number: \n");
    scanf("%d", &n);

   for (i=1; i<n; i++) {
    printf("decimal of binary num is: %d\n",a);
    d= a+b+c;
    a =b;
    b =c;
    c =d;
   }
    printf("decimal of binary num is: %d\n",d);
    return 0;

       
       
    }
     