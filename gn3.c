#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    int numbers[MAX];
    int i=0,j,k;
    char ch;

    printf("Enter orders Priority Number :\n");
    while (scanf("%d", &numbers[i]) == 1) {
        i++;
    }
    
    for (j=0; j<i-1;j++) {
        for (k=0;k<i-j-1;k++) {
            if (numbers[k] > numbers[k+1]) {
                int temp = numbers[k];
                numbers[k] = numbers[k+1];
                numbers[k+1] = temp;
            }
        }
    }

    printf("After Sorting Orders Priority:\n");
    for (j=0;j<i;j++) {
        if (j>0) printf(",");
        printf("%d", numbers[j]);
    }
    printf("\n");

    return 0;
}

