#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
 {
    for (int i = 0; i < n - 1; i++)
     {
        int least_index = i;
        for (int j = i + 1; j < n; j++)
         {
            if (arr[j] < arr[least_index]) 
            {
                least_index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[least_index];
        arr[least_index] = temp;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
