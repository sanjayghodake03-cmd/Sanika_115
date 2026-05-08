#include <iostream>
using namespace std;
int arr[5];
int front = -1, rear = -1;
void insertEnd(int value)
{
    if (rear == 4)
    {
        cout << "Deque Overflow";
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        arr[rear] = value;
    }
}
void deleteBegin()
{
    if (front == -1 || front > rear)
    {
        cout << "Deque Underflow";
    }
    else
    {
        cout << "Deleted Element = " << arr[front];
        front++;
    }
}
void display()
{
    if (front == -1 || front > rear)
    {
        cout << "Deque is Empty";
    }
    else
    {
        cout << "Deque Elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    display();

    cout << endl;

    deleteBegin();

    cout << endl;

    display();

    return 0;
}
