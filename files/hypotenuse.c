#include <stdio.h>
#include <math.h>
int main(){
    double side1;
    double side2;
    printf("Enter side1: ");
    scanf("%lf", &side1);
    printf("Enter side2");
    scanf("%lf", &side2);

    double innitial = (side1*side1) * (side2*side2);
    double hypotenuse = sqrt(innitial);
    printf("hypotenuse: %lf", hypotenuse);
}