#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice;

    do {
        cout << "\n--- ARRAY OPERATIONS ---\n";
        cout << "1. Insert elements\n";
        cout << "2. Display elements\n";
        cout << "3. Delete an element\n";
        cout << "4. Find maximum\n";
        cout << "5. Find minimum\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: // Insertion
            cout << "How many elements? ";
            cin >> n;
            cout << "Enter elements:\n";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
            break;

        case 2: // Display
            cout << "Array elements: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 3: { // Deletion
            int pos;
            cout << "Enter position to delete (1-based): ";
            cin >> pos;

            if (pos < 1 || pos > n) {
                cout << "Invalid position!\n";
            } else {
                for (int i = pos - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                cout << "Element deleted.\n";
            }
            break;
        }

        case 4: { // Maximum
            int max = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] > max)
                    max = arr[i];
            }
            cout << "Maximum element: " << max << endl;
            break;
        }

        case 5: { // Minimum
            int min = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] < min)
                    min = arr[i];
            }
            cout << "Minimum element: " << min << endl;
            break;
        }

        case 6:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
