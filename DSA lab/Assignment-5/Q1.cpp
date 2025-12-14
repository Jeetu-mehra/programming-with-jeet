#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert at any position
void insert_At_Any_position(struct Node* head, int n, int data) {
    struct Node* temp = head;
    for (int i = 1; i < n - 1; i++) {
        temp = temp->next;
    }
    struct Node* newnod = (struct Node*)malloc(sizeof(struct Node));
    newnod->data = data;
    newnod->next = temp->next;
    temp->next = newnod;
}

// Function to insert at the beginning
void insert_At_begining(struct Node** head, int data) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = *head;
    
    // To maintain the circular nature
    struct Node* temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }
    temp->next = newnode;
    *head = newnode; 
}

// Function to insert at the end
void insert_At_end(struct Node* head, int data) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    
    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head; 
}

// Function to delete at any position
void delete_At_any_position(struct Node* head, int n) {
    struct Node* temp = head;
    for (int i = 1; i < n - 1; i++) {
        temp = temp->next;
    }
    struct Node* to_delete = temp->next;
    temp->next = temp->next->next;
    free(to_delete);
}

// Function to delete at the beginning
void delete_At_begining(struct Node** head) {
    struct Node* temp = *head;
    struct Node* last = *head;
    while (last->next != *head) {
        last = last->next;
    }
    *head = (*head)->next;
    last->next = *head; 
    free(temp);
}

// Function to delete at the last position
void delete_At_last(struct Node* head) {
    struct Node* temp = head;
    while (temp->next->next != head) {
        temp = temp->next;
    }
    struct Node* to_delete = temp->next;
    temp->next = head; 
    free(to_delete);
}

// Function to display the list
void display(struct Node* head) {
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 20;
    head->next = head; 
    
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 30;
    second->next = head; 
    head->next = second;
    
    int choice, data, pos;
    
    while(1) {
        printf("\nMenu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at any position\n");
        printf("4. Delete at the beginning\n");
        printf("5. Delete at the end\n");
        printf("6. Delete at any position\n");
        printf("7. Display the list\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter an element to insert at the beginning: ");
                scanf("%d", &data);
                insert_At_begining(&head, data);
                break;
            case 2:
                printf("\nEnter an element to insert at the end: ");
                scanf("%d", &data);
                insert_At_end(head, data);
                break;
            case 3:
                printf("\nEnter the position and element to insert: ");
                scanf("%d %d", &pos, &data);
                insert_At_Any_position(head, pos, data);
                break;
            case 4:
                printf("\nDeleting at the beginning...\n");
                delete_At_begining(&head);
                break;
            case 5:
                printf("\nDeleting at the end...\n");
                delete_At_last(head);
                break;
            case 6:
                printf("\nEnter the position to delete: ");
                scanf("%d", &pos);
                delete_At_any_position(head, pos);
                break;
            case 7:
                printf("\nDisplaying the circular linked list:\n");
                display(head);
                break;
            case 8:
                printf("\nExiting...\n");
                return 0;
            default:
                printf("\nInvalid choice! Exiting...\n");
                return 0;
        }
    }

    return 0;
}