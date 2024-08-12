#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high],j;
    int i = (low - 1); 
    for (j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int a[MAX];
    int count = 0,i;
    char ch;

    printf("Enter orders Priority Number :\n");
	 while (scanf("%d", &a[count]) == 1) {
        count++;
    }
    quickSort(a,0,count-1);
    printf("After Sorting Orders Priority:\n");
    for (i=0;i<count;i++) {
        if (i>0) printf(",");
        printf("%d",a[i]);
    }
    printf("\n");

    return 0;
}

