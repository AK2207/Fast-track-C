#include<stdio.h>

int main() {
    int n;
    float total;
    printf("Enter the unit consumed \n");
    scanf("%d", &n);

    if(n<=200) {
        total =  n*1;
    }

    else if (n<=100) {
        total = (200*1)+ ((n+100)*1.5);
    }
    else {
        total = (200*1)+(100*1.5)+((n)*2);
    }
    printf("Your Total bill is: %0.2f", total);

    return 0;
}