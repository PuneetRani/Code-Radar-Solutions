#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isSorted(arr, n)) {
        printf("Sorted\n");
    } else {
        printf("not sorted\n");
    }

    return 0;
}