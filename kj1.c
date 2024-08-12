#include <stdio.h>

#define MAX 100
void insertionSort(int arr[], int n, int choice) 
{
	int i;
    for (i=1;i<n;i++) {
        int key = arr[i];
        int j=i-1;
        if (choice=='a') {
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
        arr[j+1]=key;
    }
}

int main() {
    int times[MAX];
    int count=0;
    int input,i;
    char choice;
    printf("Enter time to reach destination:\n");
    while (scanf("%d",&input)==1) {
        times[count++] = input;
    }
    printf("Sort in ascending or descending order? (a/d): ");
    scanf("%c", &choice);
    insertionSort(times, count,choice);
    printf("After Sorting Time to Reach Destination:\n");
    for (i=0;i<count;i++) {
        printf("%10d\n", times[i]);
    }

    return 0;
}

