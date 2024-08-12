#include<stdio.h>
void products_sort(int [],int);
void main()
{
	int n,a[15],i;
	printf("enter number of products:");
	scanf("%d",&n);
	printf("\nenter product ID's:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	products_sort(a,n);
}
void products_sort(int a[], int n) {
    int i, j, min, index, temp;
    
    for (i = 0; i < n; i++) {
        min = a[i];
        index = i; 
        for (j = i + 1; j < n; j++) {
            if (a[j] < min) {
                min = a[j];
                index = j; 
            }
        }
        if (index != i) {
            temp = a[i];
            a[i] = a[index];
            a[index] = temp;
        }
    }

    printf("After Sorting product IDs: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
