#include <stdio.h>

int finder(int array[], int size){
    int i = 0;
    int num = 0;
    printf("enter num to find: ");
    scanf("%d",&num);
    while (i < size){
        if(array[i] == num){
            return 0;
        }
        else{
            return 1;
        }
    i++;
    }
}

int main(){
    int i = 0;
    int value;
    int size;
    printf("enter size of array: ");
    scanf("%d",&size);
    int a[size];
    while (i < size){
        printf("Enter value: ");
        scanf("%d", &value);
        a[i] = value;
        i = i+1;
    }
    if (finder(a,size) == 0){
        printf("Number found");
    }
    else{
        printf("number not found");
    }
}