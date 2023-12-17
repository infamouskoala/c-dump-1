#include <stdio.h>

int main(){
    int num;

    printf("Value: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i = i+1){
        printf("%d\n", i);
    }
}