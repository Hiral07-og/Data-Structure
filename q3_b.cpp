#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;  

    while (s <= e) {
        int mid = s + (e - s) / 2;  

        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }

    return -1;  
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted values: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to be searched: ";
    cin >> key;

    int result = binary_search(arr, n, key);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
