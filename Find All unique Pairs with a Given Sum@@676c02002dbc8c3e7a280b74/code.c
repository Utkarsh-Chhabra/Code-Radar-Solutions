#include <stdio.h>

void findPairs(int arr[], int n, int target) {
    // Sorting the array to ensure unique pairs (Optional)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Finding unique pairs
    for (int i = 0; i < n - 1; i++) {
        if (i > 0 && arr[i] == arr[i - 1])  // Skip duplicates
            continue;
        for (int j = i + 1; j < n; j++) {
            if (j > i + 1 && arr[j] == arr[j - 1])  // Skip duplicates
                continue;
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    findPairs(arr, n, target);

    return 0;
}
