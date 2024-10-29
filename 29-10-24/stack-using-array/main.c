#include <stdio.h>
#define MAX 5
int stack[MAX], top = -1;
void push(int v) {
	if (top < MAX - 1) stack[++top] = v;
}
void pop() {
	if (top >= 0) top--;
}
void displayStack() {
	for (int i = top; i >= 0; i--) printf("%d\n", stack[i]);
}

int main() {
	push(10);
	push(20);
	push(30);
	displayStack();
	pop();
	displayStack();
	return 0;
}
