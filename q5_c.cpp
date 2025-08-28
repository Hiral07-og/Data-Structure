#include <iostream>
using namespace std;

int main() {
    int max = 4;
    int arr[max][max];

    cout << "Enter elements for lower triangular matrix (row-wise):\n";

       for (int i = 0; i < max; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> arr[i][j];
        }
        
        for (int j = i + 1; j < max; j++) {
            arr[i][j] = 0;
        }
    }

    cout << "\nLower triangular matrix is:\n";

    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
