#include <iostream>
using namespace std;

int main() {
    int max = 4;  
    
    int lower[max - 1];  
    int mainDiag[max];   
    int upper[max - 1];  

    cout << "Enter lower diagonal elements (" << max - 1 << "): ";
    for (int i = 0; i < max - 1; i++) {
        cin >> lower[i];
    }

    cout << "Enter main diagonal elements (" << max << "): ";
    for (int i = 0; i < max; i++) {
        cin >> mainDiag[i];
    }

    cout << "Enter upper diagonal elements (" << max - 1 << "): ";
    for (int i = 0; i < max - 1; i++) {
        cin >> upper[i];
    }

    cout << "\nTridiagonal matrix:\n";

    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            if (i == j) {
                // Main diagonal
                cout << mainDiag[i] << " ";
            }
            else if (j == i + 1) {
                
                cout << upper[i] << " ";
            }
            else if (i == j + 1) {
                
                cout << lower[j] << " ";
            }
            else {
                
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
