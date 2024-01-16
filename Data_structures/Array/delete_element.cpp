#include <iostream>

using namespace std;

void deleteElement(int arr[], int& n, int position) {
    // Check if the position is valid
    if (position < 0 || position >= n) {
        cout << "Invalid position for deletion." << endl;
        return;
    }

    // Shift elements to overwrite the element at the specified position
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Update the size of the array
    n--;
}

int main() {
    const int MAX_SIZE = 100; // Maximum size of the array
    int arr[MAX_SIZE]; // Declare an array
    int n; // Current size of the array

    // Input the initial size of the array
    cout << "Enter the initial size of the array: ";
    cin >> n;

    // Input array elements
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int position;

    // Input the position for deletion
    cout << "Enter the position for deletion: ";
    cin >> position;

    // Call the deleteElement function
    deleteElement(arr, n, position);

    // Display the updated array
    cout << "Array after deletion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

