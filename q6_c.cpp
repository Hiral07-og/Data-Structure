#include <iostream>
#include <vector>
using namespace std;

struct Element {
    int row;
    int col;
    int value;
};

void multiplySparseMatrices(Element A[], int termsA, int rowsA, int colsA,
                            Element B[], int termsB, int rowsB, int colsB) {
    if (colsA != rowsB) {
        cout << "Matrix multiplication not possible due to dimension mismatch.\n";
        return;
    }

    vector<Element> result;

    vector<vector<Element>> B_by_row(rowsB);
    for (int i = 0; i < termsB; i++) {
        B_by_row[B[i].row].push_back(B[i]);
    }

    for (int i = 0; i < termsA; i++) {
        int rA = A[i].row;
        int cA = A[i].col;
        int valA = A[i].value;

        for (auto &elemB : B_by_row[cA]) {
            int cB = elemB.col;
            int valB = elemB.value;

            bool found = false;
            for (auto &resElem : result) {
                if (resElem.row == rA && resElem.col == cB) {
                    resElem.value += valA * valB;
                    found = true;
                    break;
                }
            }
            if (!found) {
                Element newElem = {rA, cB, valA * valB};
                result.push_back(newElem);
            }
        }
    }

    vector<Element> finalResult;
    for (auto &e : result) {
        if (e.value != 0) finalResult.push_back(e);
    }

    cout << "\nResultant Sparse Matrix after multiplication (triplet form):\n";
    cout << "Row\tCol\tValue\n";
    for (auto &e : finalResult) {
        cout << e.row << "\t" << e.col << "\t" << e.value << "\n";
    }
}

int main() {
    int rowsA, colsA;
    cout << "Enter rows and columns of matrix A: ";
    cin >> rowsA >> colsA;
    int termsA;
    cout << "Enter number of non-zero terms in matrix A: ";
    cin >> termsA;
    Element A[termsA];
    cout << "Enter non-zero elements of A (row col value):\n";
    for (int i = 0; i < termsA; i++) {
        cin >> A[i].row >> A[i].col >> A[i].value;
    }

    int rowsB, colsB;
    cout << "Enter rows and columns of matrix B: ";
    cin >> rowsB >> colsB;
    int termsB;
    cout << "Enter number of non-zero terms in matrix B: ";
    cin >> termsB;
    Element B[termsB];
    cout << "Enter non-zero elements of B (row col value):\n";
    for (int i = 0; i < termsB; i++) {
        cin >> B[i].row >> B[i].col >> B[i].value;
    }

    multiplySparseMatrices(A, termsA, rowsA, colsA, B, termsB, rowsB, colsB);

    return 0;
}
