// recursion function in C because yes
#include <stdio.h>

int recur(int n){
    while (n >= 1){
        if (n>=0){
            n = n-1;
            printf("%d\n",n);
        }
        else {
            recur(n);
        }
    }
    return 0;
}

int main(){
    int num;
    printf("number: ");
    scanf("%d",&num);
    recur(num);
}