#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target, i, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element not found\n");

    return 0;
}

