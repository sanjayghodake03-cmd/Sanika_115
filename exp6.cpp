#include <iostream>
using namespace std;

#define MAX 5

class Queue {
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue() {
        int x;
        if (rear == MAX - 1) {
            cout << "Queue Overflow!" << endl;
        } else {
            cout << "Enter element: ";
            cin >> x;
            if (front == -1)
                front = 0;
            rear++;
            arr[rear] = x;
            cout << "Inserted successfully." << endl;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
        } else {
            cout << "Deleted element: " << arr[front] << endl;
            front++;
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int choice;

    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            q.enqueue();
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
