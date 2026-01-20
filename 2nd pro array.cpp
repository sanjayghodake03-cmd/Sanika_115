#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, choice;

    cout << "Enter the rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter the elements of first matrix:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter the rows and columns of second matrix: ";
    cin >> r2 >> c2;

    cout << "Enter the elements of second matrix:\n";
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }

    do {
        cout << "\n--- MENU ---";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Transpose of First Matrix";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            if(r1 == r2 && c1 == c2) {
                cout << "\nAddition Result:\n";
                for(int i = 0; i < r1; i++) {
                    for(int j = 0; j < c1; j++) {
                        c[i][j] = a[i][j] + b[i][j];
                        cout << c[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "Addition is not possible!";
            }
            break;

        case 2:
            if(r1 == r2 && c1 == c2) {
                cout << "\nSubtraction Result:\n";
                for(int i = 0; i < r1; i++) {
                    for(int j = 0; j < c1; j++) {
                        c[i][j] = a[i][j] - b[i][j];
                        cout << c[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "Subtraction is not possible!";
            }
            break;

        case 3:
            if(c1 == r2) {
                cout << "\nMultiplication Result:\n";
                for(int i = 0; i < r1; i++) {
                    for(int j = 0; j < c2; j++) {
                        c[i][j] = 0;
                        for(int k = 0; k < c1; k++) {
                            c[i][j] += a[i][k] * b[k][j];
                        }
                        cout << c[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "Multiplication is not possible!";
            }
            break;

        case 4:
            cout << "\nTranspose of First Matrix:\n";
            for(int i = 0; i < c1; i++) {
                for(int j = 0; j < r1; j++) {
                    cout << a[j][i] << " ";
                }
                cout << endl;
            }
            break;

        case 5:
            cout << "Exiting the program";
            break;

        default:
            cout << "Invalid";
        }

    } while(choice != 5);

    return 0;
}
