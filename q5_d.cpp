#include <iostream>
using namespace std;

int main() {
    int max = 4;
    int arr[max][max];

    cout << "Enter elements for upper triangular matrix (row-wise):\n";

    
    for (int i = 0; i < max; i++) {
        for (int j = i; j < max; j++) {
            cin >> arr[i][j];
        }
    
        for (int j = 0; j < i; j++) {
            arr[i][j] = 0;
        }
    }

    cout << "\nUpper triangular matrix is:\n";

    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
