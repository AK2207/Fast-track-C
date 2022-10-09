/*7. Use recursive calls to evaluate F(x) = x + x3/3! + x5/5! + x7/7!+...... */

#include<stdio.h>
#include<math.h>

int fact(int n);

int main() {
   
    printf("Enter x value" );
   
}

int fact(int n) {
    int x;
    while( x==0){
        int factNm1 = fact(n-1);
        int factN = factNm1*n;
    }
    int x=n +n;

    }

    