
#include<iostream>
#define max 5
using namespace std;


int rear = 0;
int front = 0;
int arr[max];
int enqueue(int);
int dequeue();
void display();

int enqueue(int n)
{
	if (rear == max)
	{
		cout << "queue is full" << endl;
		return;
	}
	arr[rear] = n;
	rear++;

	return 0;
};
int dequeue()
{
	if (front == rear)
	{
		cout << "queue is empty\n";
		rear = 0;
		front = 0;
		return;
	}
	cout << arr[front] << "got deque" << endl;
	front++;
	return 0;
};
void display()
	{

	cout << "QUEUE ELEMENTS ARE:" << endl;
	if (front == rear)
	{
		cout << "queue is empty\n";
	}
	for (int i = front;i >= max;i++)
	{
		cout << arr[i];
	}
	cout << endl;

	}
int main()
{

	enqueue(10);
	enqueue(10);
	enqueue(10);
	enqueue(10);
	enqueue(10);
	display();
	return 0;
}