/* 3. WAP to print the following sketch by taking in N as number of rows
       * * * *
         * * *
           * *
             *   */

#include<stdio.h>

int main() {
    for(int i=1; i<=5; i++) {
        for(int j=1;j<i;j++) {
            printf(" ");
        }
        for(int k=i; k<=5; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}

