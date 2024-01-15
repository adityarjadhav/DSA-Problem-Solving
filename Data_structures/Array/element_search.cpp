#include <iostream>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int key;
    std::cout << "Enter the key to be searched: ";
    std::cin >> key;

    int result = linearSearch(arr, n, key);

    if (result != -1) {
        std::cout << "Key found at index: " << result << std::endl;
    } else {
        std::cout << "Key not found in the array." << std::endl;
    }

    return 0;
}

