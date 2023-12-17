#include <stdio.h>

int isprime(int n){
    int counter = 1;
    int factor = 0;

    while (counter <= n){
        if (n%counter == 0){
            factor = factor+1;
            counter = counter+1;
        }
        else{
            counter=counter+1;
        }
    }
    if (factor >> 2){
        printf("composite number");
    }
    else{
        printf("prime number");
    }
}

int main(){
    int x;
    printf("enter number: ");
    scanf("%d",&x);
    isprime(x);
}