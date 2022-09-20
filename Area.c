#include<stdio.h>

// Area of square & area of circle

int main() {
    float side;
    printf("Enter side\n");
    scanf("%f", &side);

    printf("Area of square is : %f\n", side*side);

    float radius;
    printf("Enter radius\n");
    scanf("%f", &radius);

    printf("Area of circle is : %f\n", 3.14*radius*radius);
    
    return 0;
}