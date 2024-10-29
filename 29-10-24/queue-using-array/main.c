#include <stdio.h>
#define MAX 5
int queue[MAX], front = -1, rear = -1;
void enqueue(int v) {
	if (rear < MAX - 1) queue[++rear] = v;
	if (front == -1) front = 0;
}
void dequeue() {
	if (front <= rear) front++;
}
void displayQueue() {
	for (int i = front; i <= rear; i++) printf("%d\n", queue[i]);
}

int main() {
	enqueue(10);
	enqueue(20);
	enqueue(30);
	displayQueue();
	dequeue();
	displayQueue();
	return 0;
}
