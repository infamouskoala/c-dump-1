#include <stdio.h>

int builder(int elements){
    int a[elements];
    int i = 0;
    int value;
    while (i < elements){
        printf("Enter value: ");
        scanf("%d", &value);
        a[i] = value;
        i = i+1;
    }
    printf("Array updated!");
}

int main(){
    int n;
    printf("input size: ");
    scanf("%d",&n);
    builder(n);
}