#include <iostream>
using namespace std;

int main() {
    int max = 4;
    int arr[max][max];

    cout << "Enter elements for the upper triangle (including diagonal) of the symmetric matrix (row-wise):\n";

    
    for (int i = 0; i < max; i++) {
        for (int j = i; j < max; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i < max; i++) {
        for (int j = 0; j < i; j++) {
            arr[i][j] = arr[j][i];
        }
    }

    cout << "\nSymmetric matrix is:\n";
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
