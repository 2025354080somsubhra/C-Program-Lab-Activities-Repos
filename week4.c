#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n1, n2, i;

    
    printf("Enter initial size n1: ");
    scanf("%d", &n1);

    
    arr = (int *)malloc(n1 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter additional size n2: ");
    scanf("%d", &n2);

    
    arr = (int *)realloc(arr, (n1 + n2) * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    
    printf("Enter %d more elements:\n", n2);
    for (i = n1; i < n1 + n2; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Array after expansion:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    free(arr);

    return 0;
}
