#include <iostream>
using namespace std;

struct Element {
    int row;
    int col;
    int value;
};

void transpose(Element sparse[], int terms) {
    Element transposed[terms];
    
   
    for (int i = 0; i < terms; i++) {
        transposed[i].row = sparse[i].col;
        transposed[i].col = sparse[i].row;
        transposed[i].value = sparse[i].value;
    }
    for (int i = 0; i < terms - 1; i++) {
        for (int j = i + 1; j < terms; j++) {
            if (transposed[i].row > transposed[j].row || 
               (transposed[i].row == transposed[j].row && transposed[i].col > transposed[j].col)) {
                swap(transposed[i], transposed[j]);
            }
        }
    }

    cout << "\nTransposed Sparse Matrix (triplet form):\n";
    cout << "Row\tCol\tValue\n";
    for (int i = 0; i < terms; i++) {
        cout << transposed[i].row << "\t" << transposed[i].col << "\t" << transposed[i].value << "\n";
    }
}

int main() {
    int rows, cols, terms;

    cout << "Enter number of rows, columns and non-zero terms: ";
    cin >> rows >> cols >> terms;

    Element sparse[terms];

    cout << "Enter non-zero elements in format: row col value\n";
    for (int i = 0; i < terms; i++) {
        cin >> sparse[i].row >> sparse[i].col >> sparse[i].value;
    }

    cout << "\nOriginal Sparse Matrix (triplet form):\n";
    cout << "Row\tCol\tValue\n";
    for (int i = 0; i < terms; i++) {
        cout << sparse[i].row << "\t" << sparse[i].col << "\t" << sparse[i].value << "\n";
    }

    transpose(sparse, terms);

    return 0;
}
