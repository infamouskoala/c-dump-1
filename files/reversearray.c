#include <stdio.h>

int main(){
    int size, value;
    int i = 0;
    int j = 0;
    printf("Enter the size of array");
    scanf("%d",&size);
    int a[size];
    while (i<size){
        printf("enter num: ");
        scanf("%d",&value);
        a[i] = value;
        i++;
    }
    int start = 0;
    int end = size - 1;
    while (start < end){
        int temp = a[start];
        a[start]=a[end];
        a[end]=temp;

        start++;
        end--;
    }
    printf("reversed array: \n");
    for (i=0;i<size;i++){
        printf("%d",a[i]);
    }
}