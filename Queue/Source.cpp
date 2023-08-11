#include<iostream>
#include <cassert>
using namespace std;
const int Max_Length = 100;
// ////////////////////////// Queue with stack array \\\\\\\\\\\\\\\\\\\\\\\\\\\\\

/*class arrayQueueType {
private:
	int front;
	int rear;
	int length;
	int arr[Max_Length];
public:
	arrayQueueType() {
		front = 0;
		rear = Max_Length - 1;
		length = 0;
	}

	int isEmpty() {
		return length == 0;
	}
	bool isfull() {
		return length == Max_Length;
	}

	void addQueue(int element) {
		if (isfull()) {
			cout << "Queue full can't Enqueue...!" << "\n";
		}
		else
		{
			rear = (rear + 1) % Max_Length;
			arr[rear] = element;
			length++;
		}
	}

	void deleteQueue() {
		if (isEmpty()) {
			cout << "Queue empty can't Enqueue...!" << "\n";
		}
		else
		{
			
			front = (front + 1) % Max_Length;
			--length;
			
		}
	}
	int frontQueue() {
		assert(!isEmpty());
		return arr[front];
	}
	void getFront(int &getFront) {
		assert(!isEmpty());
		getFront = arr[front];
	}

	int rearQueue() {
		assert(!isEmpty());
		return arr[rear];
	}

	void printQueue() {
		if (!isEmpty()) {
			for (int i = 0; i != rear; i = (i + 1) % Max_Length)
			{
				cout << arr[i] << " ";
			}
			cout << arr[rear];
		}
		else
		{
			cout << "Empty Queue" << "\n";
		}
	}
};
*/

// ////////////////////////// Queue with dynamic array \\\\\\\\\\\\\\\\\\\\\\\\\\\\\

template <class t>
/*class arrayQueueType {
private:
	int front;
	int rear;
	int length;
	t *arr;
	int maxSize;
public:
	arrayQueueType(int size) {
		if (size <= 0) {
			maxSize=100;
		}
		else
		{
		maxSize = size;
		arr = new t[maxSize];
		front = 0;
		rear = maxSize - 1;
		length = 0;
		}
		
	}

	int isEmpty() {
		return length == 0;
	}
	bool isfull() {
		return length == maxSize;
	}

	void addQueue(t element) {
		if (isfull()) {
			cout << "Queue full can't Enqueue...!" << "\n";
		}
		else
		{
			rear = (rear + 1) % maxSize;
			arr[rear] = element;
			length++;
		}
	}

	void deleteQueue() {
		if (isEmpty()) {
			cout << "Queue empty can't Enqueue...!" << "\n";
		}
		else
		{

			front = (front + 1) % maxSize;
			--length;

		}
	}
	int frontQueue() {
		assert(!isEmpty());
		return arr[front];
	}
	void getFront(int& getFront) {
		assert(!isEmpty());
		getFront = arr[front];
	}

	int rearQueue() {
		assert(!isEmpty());
		return arr[rear];
	}

	void printQueue() {
		if (!isEmpty()) {
			for (int i = 0; i != rear; i = (i + 1) % maxSize)
			{
				cout << arr[i] << " ";
			}
			cout << arr[rear];
		}
		else
		{
			cout << "Empty Queue" << "\n";
		}
	}

	int queueSearch(t element) {
		int pos = -1;
		if (!isEmpty()) {
			for (int i = front; i != rear; i=(i+1)%maxSize)
				if (arr[i] == element)
				{
					{
						pos = i;
						break;
					}
				}
			if (pos == -1) {
				if (arr[rear] == element) {
					pos = rear;
				}
			}
		}
		else
		{
			cout << "Queue is empty...!" << "\n";
		}
		return pos;
	}
};*/

// ////////////////////////// Queue with linked list \\\\\\\\\\\\\\\\\\\\\\\\\\\\\

/*class linkedQueue {
private:
	struct Node
	{
		t item;
		Node* next;

	};
	Node* frontPtr, * rearPtr;
	int lenght;
public:

	linkedQueue() {
		frontPtr = rearPtr = NULL;
		lenght = 0;
	}

	bool isEmpty() {
		return lenght == 0;
	}
	void enqueue(t element) {
		Node* newPtr = new Node;
		newPtr->item = element;
		newPtr->next = NULL;
		if (isEmpty()) {
			rearPtr = frontPtr = newPtr;
		}
		else
		{
			rearPtr->next = newPtr;
			rearPtr = newPtr;
		}
		lenght++;
	}

	void dequeue() {
		if (isEmpty()) {
			cout << "Empty Queue,Cannot Dequeue...!" << "\n";
		}
		else
		{
			Node* tempPtr = frontPtr;
			if (frontPtr == rearPtr) {
				frontPtr = NULL;
				rearPtr = NULL;
				lenght--;
			}
			else
			{
				lenght--;
				frontPtr = frontPtr->next;
				tempPtr->next = NULL;
				delete tempPtr;
			}
		}
	}

	t getFront() {
		assert(!isEmpty());
		return frontPtr->item;
	}
	void getFront2(t& el) {
		el = frontPtr->item;
		cout << el;
	}

	t getrear() {
		assert(!isEmpty());
		return rearPtr->item;
	}

	void clearQueue() {
		Node* current;
		while (frontPtr != NULL)
		{
			current = frontPtr;
			frontPtr = frontPtr->next;
			delete current;
		}
		rearPtr = NULL;
		lenght = 0;
		cout << "this is clear a queue " << "\n";
	}
	void display() {
		Node* curPtr = frontPtr;
		cout << "Item in the queue:[";
		while (curPtr != NULL)
		{
			cout << curPtr->item << " ";
			curPtr = curPtr->next;
		}
		cout << "]\n";
	}

	int getsize() {
		return lenght;
	}

};*/



int main() {
	/*arrayQueueType q1;
	q1.addQueue(10);
	q1.addQueue(20);
	q1.addQueue(30);
	q1.addQueue(40);
	q1.deleteQueue();
	cout << q1.rearQueue()<<"\n";
	cout << q1.frontQueue()<<"\n";
	q1.printQueue();
	*/


	/*arrayQueueType<double> q1(5);
	q1.addQueue(10);
	q1.addQueue(20);
	q1.addQueue(30);
	q1.addQueue(40);
	q1.addQueue(50.654);
	q1.addQueue(60);
	q1.deleteQueue();
	q1.deleteQueue();
	q1.deleteQueue();
	q1.addQueue(120);
	q1.addQueue(150.2345);

	cout << q1.rearQueue() << "\n";
	cout << q1.frontQueue() << "\n";
	q1.printQueue();
	cout << "\n============\n" << q1.queueSearch(120) << "\n";
	cout<<"\n============\n" << q1.queueSearch(150) << "\n";*/

	/*linkedQueue<char> q1;
	q1.enqueue('A');
	q1.enqueue('f');
	q1.enqueue('A');
	q1.enqueue('d');
	q1.enqueue('y');
	q1.enqueue('e');
	q1.enqueue('m');
	q1.enqueue('i');
	q1.enqueue('l');
	q1.dequeue();
	char x ;
	cout << "get front2= ";
	q1.getFront2(x);
	cout << "\n";
	cout << "front : " << q1.getFront() << "\n";
	cout << "front : " << q1.getrear()<<"\n";
	q1.display();
	cout << "size in queue: " << q1.getsize()<<"\n";
	q1.clearQueue();
	q1.display();*/


}