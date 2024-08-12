#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void quicksort(int *array, int low, int high);
int partition(int *array, int low, int high);
void print_array(int *array, int size);

int main() {
    char input[1024];
    int product_ids[100];
    int num_ids = 0;
    printf("Enter Product IDs (comma-separated): ");
    fgets(input, sizeof(input), stdin);
    char *token = strtok(input, ",\n");
    while (token != NULL) {
        product_ids[num_ids++] = atoi(token);
        token = strtok(NULL, ",\n");
    }
    quicksort(product_ids, 0, num_ids - 1);
    printf("After Sorting Product IDs:\n");
    print_array(product_ids, num_ids);

    return 0;
}
void quicksort(int *array, int low, int high) {
    if (low < high) {
        int pivot_index = partition(array, low, high);
        quicksort(array, low, pivot_index - 1);
        quicksort(array, pivot_index + 1, high);
    }
}
int partition(int *array, int low, int high) {
    int pivot = array[high],j;
    int i = (low - 1);
    for (j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    int temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;
    return (i + 1);
}

void print_array(int *array, int size) {
	int i;
    for ( i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(",");
        }
    }
    printf("\n");
}

