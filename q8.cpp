#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> distinctElements;
    for (int i = 0; i < n; i++) {
        distinctElements.insert(arr[i]);
    }

    cout << "Total distinct elements: " << distinctElements.size() << endl;

    return 0;
}
