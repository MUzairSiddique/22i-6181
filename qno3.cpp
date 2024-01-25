#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
void inputMatrix(int A[][MAX_SIZE], int m, int n) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
}
void displayMatrix(int A[][MAX_SIZE], int m, int n) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
int sumMatrix(int A[][MAX_SIZE], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += A[i][j];
        }
    }
    return sum;
}
void rowSum(int A[][MAX_SIZE], int m, int n) {
    cout << "Row-wise sum:" << endl;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += A[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
}
void columnSum(int A[][MAX_SIZE], int m, int n) {
    cout << "Column-wise sum:" << endl;
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += A[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
}
void transposeMatrix(int A[][MAX_SIZE], int m, int n) {
    cout << "Transpose of the matrix:" << endl;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    int A[MAX_SIZE][MAX_SIZE];

    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    inputMatrix(A, m, n);

    int choice;
    do {
        cout << "Menu:" << endl;
        cout << "1. Display Matrix" << endl;
        cout << "2. Sum of all elements" << endl;
        cout << "3. Row-wise sum" << endl;
        cout << "4. Column-wise sum" << endl;
        cout << "5. Transpose" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            displayMatrix(A, m, n);
            break;
        case 2:
            cout << "Sum of all elements: " << sumMatrix(A, m, n) << endl;
            break;
        case 3:
            rowSum(A, m, n);
            break;
        case 4:
            columnSum(A, m, n);
            break;
        case 5:
            transposeMatrix(A, m, n);
            break;
        case 0:
            cout << "Exiting";
            break;
        default:
            cout << "Invalid choice. Please enter again."<<endl;
        }
    } while (choice != 0);

    return 0;
}
