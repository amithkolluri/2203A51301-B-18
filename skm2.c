#include <stdio.h>
#include <stdlib.h>

#define MAX 100
void merge(int arr[], int l,int mid,int r) {
    int n1=mid-l+1,i,j;
    int n2=r-mid;
    int *Lft=(int *)malloc(n1*sizeof(int));
    int *Rgt=(int *)malloc(n2*sizeof(int));
   
    for (i=0;i<n1;i++)
        Lft[i] =arr[l+i];
    for (j=0;j<n2;j++)
        Rgt[j]=arr[mid+1+j];
	{

    int i=0; 
    int j=0; 
    int k=l; 
    
    while (i<n1&&j<n2) {
        if (Lft[i]>Rgt[j]) {
            arr[k]=Lft[i];
            i++;
        } 
		else {
            arr[k] = Rgt[j];
            j++;
        }
        k++;
    }
    while (i<n1) {
        arr[k]=Lft[i];
        i++;
        k++;
    }

    while (j<n2) {
        arr[k] = Rgt[j];
        j++;
        k++;
    }
    free(Lft);
    free(Rgt);
}
}
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left+(right-left)/2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int packages[MAX];
    int count=0,i;
    int input;

    printf("Enter Package Tracking Number:\n");

    while (scanf("%d", &input) == 1) {
        packages[count++] = input;
    }
    mergeSort(packages,0,count-1);
    printf("After Sorting Package Tracking Numbers:\n");
    for (i=0;i<count;i++) {
        printf("%d\n", packages[i]);
    }

    return 0;
}

