#include <stdio.h>

int main() {
    // HAHA GARBAGE VALUES GO SKRRRRTTTTTTTTTT
    int i = 0;
    int value = 0;
    int check = 0;
    int freq = 0;

    printf("Enter the number of elements in an array: ");
    scanf("%d", &i);
    int a[i];
    int j = 0;
    while (j < i) {
        printf("Enter value: ");
        scanf("%d", &value);
        a[j] = value;
        j++;
    }

    printf("Enter the number to check freq of: ");
    scanf("%d", &check);
    j = 0;
    while (j < i) {
        if (a[j] == check) {
            freq = freq + 1;
            printf("Found a hit\n");
        }
        j++;
    }

    printf("Number: %d\nTimes: %d\n", check, freq);
}
