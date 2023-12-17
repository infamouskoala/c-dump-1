#include <stdio.h>
int main(){
    int size;
    int value;
    printf("enter the size of array: ");
    scanf("%d",&size);
    int a[size];
    int i = 0;
    while (i<size){
        printf("enter value for %d", i);
        scanf("%d",&value);
        a[i] = value;
        i++;
    }
    int index;
    printf("enter the value at index: ");
    scanf("%d",&index);
    if (index < 0 || index >= size){
        printf("invalid index number");
    }
    else{
        printf("%d",a[index]);
    }
}