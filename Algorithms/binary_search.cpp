#include <bits/stdc++.h>
using namespace std;

// Recursive binary search function
int binarySearch (int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1; // Element not found
}

// Driver code
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call binarySearch function
    int result = binarySearch(arr, 0, n - 1, x);

    // Display the result
    if (result == -1) {
        cout << "Element not found";
    } else {
        cout << "Element found at index " << result;
    }

    return 0;
}

