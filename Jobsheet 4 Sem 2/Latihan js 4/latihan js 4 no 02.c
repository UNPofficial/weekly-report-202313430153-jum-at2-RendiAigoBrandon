#include <stdio.h>
#include <stdlib.h>

//Created By Rendi Aigo Brandon_23343082

// Structure of the node
struct Node {
	int data;
	struct Node *next; // Pointer to next node
	struct Node *prev; // Pointer to previous node
};

// Fungsi untuk menambahkan node baru di awal linked list
void push(struct Node** head_ref, int new_data) {
	/* 1. allocate node */
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	/* 2. put in the data */
	new_node->data = new_data;

	/* 3. Make next of new node as head and previous as NULL */
	new_node->next = (*head_ref);
	new_node->prev = NULL;

	/* 4. change prev of head node to new node */
	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	/* 5. move the head to point to the new node */
	(*head_ref) = new_node;
}

// Fungsi untuk menyisipkan node baru setelah node tertentu
void insertAfter(struct Node* prev_node, int new_data) {
	/*1. check if the given prev_node is NULL */
	if (prev_node == NULL) {
		printf("the given previous node cannot be NULL");
		return;
	}
	/* 2. allocate new node */
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	if (new_node == NULL) {
		printf("Memory allocation failed");
		return;
	}
	/* 3. put in the data */
	new_node->data = new_data;
	/* 4. Make next of new node as next of prev_node */
	new_node->next = prev_node->next;
	/* 5. Make the next of prev_node as new_node */
	prev_node->next = new_node;
	/* 6. Make prev_node as previous of new_node */
	new_node->prev = prev_node;
	/* 7. Change previous of new_node's next node */
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
}

// Fungsi untuk mencetak isi linked list
void printList(struct Node* node) {
	struct Node* last = NULL;
	printf("\nTraversal in forward direction: ");
	while (node != NULL) {
		printf("%d ", node->data);
		last = node;
		node = node->next;
	}
	printf("\nTraversal in reverse direction: ");
	while (last != NULL) {
		printf("%d ", last->data);
		last = last->prev;
	}
	printf("\n");
}

int main() {
	/* Start with the empty list */
	struct Node* head = NULL;

	// Menambahkan node-node baru
	push(&head, 6);
	push(&head, 5);
	push(&head, 2);
	insertAfter(head->next, 5);

	printf("Created DLL is: ");
	printList(head);

	// Free memory yang dialokasikan
	struct Node* temp;
	while (head != NULL) {
		temp = head;
		head = head->next;
		free(temp);
	}

	return 0;
}
