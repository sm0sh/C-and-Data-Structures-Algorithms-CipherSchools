#include <iostream>

using namespace std;

// Function to swap two elements in the array
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to partition the array and place the pivot at its correct position
int partition(int arr[], int start, int end) {
    // Choose the rightmost element as the pivot
    int pivot = arr[end];

    // Index of the smaller element
    int i = start - 1;

    for (int j = start; j <= end - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++; // Increment the index of the smaller element
            swap(arr[i], arr[j]); // Swap arr[i] and arr[j]
        }
    }

    // Swap the pivot element with the element at index (i + 1)
    swap(arr[i + 1], arr[end]);

    // Return the index of the pivot element
    return (i + 1);
}

// Function to perform QuickSort on the array
void quickSort(int arr[], int start, int end) {
    if (start < end) {
        // Partition the array and get the pivot index
        int pivotIndex = partition(arr, start, end);

        // Recursively sort the sub-arrays
        quickSort(arr, start, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, end);
    }
}

// Function to print the elements of the array
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Example usage
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
