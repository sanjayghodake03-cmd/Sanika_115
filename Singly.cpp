#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at beginning
void insert() {
    Node* newNode = new Node();
    cout << "Enter value: ";
    cin >> newNode->data;
    
    newNode->next = head;
    head = newNode;
}

// Delete from beginning
void del() {
    if (head == NULL) {
        cout << "List is empty\n";
    } else {
        Node* temp = head;
        cout << "Deleted: " << temp->data << endl;
        head = head->next;
        delete temp;
    }
}

// Display list
void display() {
    Node* temp = head;
    
    if (temp == NULL) {
        cout << "List is empty\n";
        return;
    }
    
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int choice;

    do {
        cout << "\n1.Insert\n2.Delete\n3.Display\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Exit\n";
            break;
        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}
