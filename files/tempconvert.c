#include <stdio.h>
int main(){
    char unit;
    double temp;
    
    printf("enter temp: ");
    scanf("%lf", &temp);

    printf("enter unit: ");
    scanf(" %c", &unit);

    if(unit == 'c'){
        double final_temp = temp * (9/5) + 32;
        printf("Temp in F: %lf", final_temp);
    }
    else if (unit == 'f') {
        double final_temp = (temp - 32) * 5/9;
        printf("Temperature in Celsius: ", final_temp);
    }
}