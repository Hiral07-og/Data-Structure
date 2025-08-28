#include <iostream>
using namespace std;

struct Element {
    int row;
    int col;
    int value;
};

void addSparseMatrices(Element A[], int termsA, Element B[], int termsB) {
    Element result[termsA + termsB];
    int i = 0, j = 0, k = 0;

    while (i < termsA && j < termsB) {
        
        if (A[i].row < B[j].row || (A[i].row == B[j].row && A[i].col < B[j].col)) {
            result[k++] = A[i++];
        } 
        else if (B[j].row < A[i].row || (B[j].row == A[i].row && B[j].col < A[i].col)) {
            result[k++] = B[j++];
        } 
        else {
            
            int sum = A[i].value + B[j].value;
            if (sum != 0) {
                result[k] = A[i];
                result[k++].value = sum;
            }
            i++; j++;
        }
    }


    while (i < termsA) result[k++] = A[i++];
    while (j < termsB) result[k++] = B[j++];

    cout << "\nResultant Sparse Matrix (triplet form):\n";
    cout << "Row\tCol\tValue\n";
    for (int idx = 0; idx < k; idx++) {
        cout << result[idx].row << "\t" << result[idx].col << "\t" << result[idx].value << "\n";
    }
}

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int termsA;
    cout << "Enter number of non-zero terms in matrix A: ";
    cin >> termsA;
    Element A[termsA];

    cout << "Enter non-zero elements of matrix A (row col value):\n";
    for (int i = 0; i < termsA; i++) {
        cin >> A[i].row >> A[i].col >> A[i].value;
    }

    int termsB;
    cout << "Enter number of non-zero terms in matrix B: ";
    cin >> termsB;
    Element B[termsB];

    cout << "Enter non-zero elements of matrix B (row col value):\n";
    for (int i = 0; i < termsB; i++) {
        cin >> B[i].row >> B[i].col >> B[i].value;
    }

    addSparseMatrices(A, termsA, B, termsB);

    return 0;
}
