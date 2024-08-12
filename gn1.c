#include <stdio.h>

#define MAX 100

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int a[MAX];
    int n=0,i;
    printf("Enter time to reach destination:\n");
    while (n<MAX && scanf("%d", &a[n]) == 1) {
        n++;
    }
    bubbleSort(a, n);
    printf("Sorted delivery times:\n");
    for(i=0;i<n;i++) {
        printf("%d\n",a[i]);
    }

    return 0;
}

