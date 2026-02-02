#include <iostream>
using namespace std;

void print(int *a, int n) {
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void bubble(int *a, int n) {
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(a[j] > a[j + 1])
                swap(a[j], a[j + 1]); 
}

void selection(int *a, int n) {
    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++)
            if(a[j] < a[min])
                min = j;
        swap(a[i], a[min]);
    }
}

void insertion(int *a, int n) {
    for(int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int partition(int *a, int low, int high) {
    int pivot = a[low];
    int i = low + 1, j = high;

    while(i <= j) {
        while(i <= high && a[i] <= pivot) i++;
        while(a[j] > pivot) j--;
        if(i < j)
            swap(a[i], a[j]);
    }
    swap(a[low], a[j]);
    return j;
}

void quickSort(int *a, int low, int high) {
    if(low < high) {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main() {
    int n, choice;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n--- Sorting Menu ---\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Insertion Sort\n";
    cout << "4. Quick Sort\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: bubble(arr, n); 
        break;
        case 2: 
        selection(arr, n); 
        break;
        case 3: insertion(arr, n);
         break;
        case 4: quickSort(arr, 0, n - 1); 
        break;
        default:
        cout << "Invalid choice";
        delete[] arr;
        return 0;
    }

    cout << "Sorted array:\n";
    print(arr, n);

    delete[] arr;
    return 0;
}
