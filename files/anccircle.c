#include <stdio.h>
int main(){
    double pi = 3.14;
    int radius;
    printf("Find area of circle!\n");
    printf("Radius: ");
    scanf("%d", &radius);
    printf("%d", radius);
    double area = pi * radius * radius;
    double circum = 2 * pi * radius;
    printf("Area of circle is: %lf\n", area);
    printf("Circumfence of the circle is: %lf", circum);
}