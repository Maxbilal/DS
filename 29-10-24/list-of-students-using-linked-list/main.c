#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char name[50];
	int roll;
	struct Student* next;
};
void addStudent(struct Student** head, char* name, int roll) {
	struct Student* new = malloc(sizeof(struct Student));
	strcpy(new->name, name);
	new->roll = roll;
	new->next = *head;
	*head = new;
}
void displayAll(struct Student* head) {
	while (head) {
		printf("%s %d\n", head->name, head->roll);
		head = head->next;
	}
}

int main() {
	struct Student* head = NULL;
	addStudent(&head, "Alice", 1);
	addStudent(&head, "Bob", 2);
	displayAll(head);
	return 0;
}
