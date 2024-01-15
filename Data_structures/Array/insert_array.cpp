#include <iostream>

using namespace std;

void insertElement(int arr[], int& n, int position, int element) {
    // Check if the position is valid
    if (position < 0 || position > n) {
        cout << "Invalid position for insertion." << endl;
        return;
    }

    // Shift elements to make space for the new element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Update the size of the array
    n++;
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

    int position, element;

    // Input the position and element to be inserted
    cout << "Enter the position for insertion: ";
    cin >> position;

    cout << "Enter the element to be inserted: ";
    cin >> element;

    // Call the insertElement function
    insertElement(arr, n, position, element);

    // Display the updated array
    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

