#include <stdio.h>

#define MAX 100
void insertionSort(int arr[], int n, int ch) {
	int i;
    for (i=1;i<n;i++) {
        int key = arr[i];
        int j = i - 1;
        if (ch=='a') {
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
        }
        else {
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j--;
            }
        }
        arr[j + 1] = key;
    }
}

int main() {
    int prices[MAX];
    int count = 0;
    int input,i;
    char choice;

    printf("Enter Product Prices:\n");
    while (scanf("%d", &input) == 1) {
        prices[count++] = input;
    }
    printf("Sort in ascending or descending order? (a/d): ");
    scanf("%c", &choice);
    insertionSort(prices, count,choice);
    printf("After Sorting Product Prices:\n");
    for (i = 0; i < count; i++) {
        printf("%10d\n", prices[i]);
    }

    return 0;
}

