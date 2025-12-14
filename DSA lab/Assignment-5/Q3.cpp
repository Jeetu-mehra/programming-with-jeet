#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

typedef struct node NODE;

struct stack {
    NODE* top; 
};

typedef struct stack STACK;

void create(STACK* s) {
    s->top = NULL; 
}

int isEmpty(STACK* s) {
    return s->top == NULL; 
}

void push(STACK* s, int value) {
    NODE* newNode = (NODE*)malloc(sizeof(NODE)); 
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value; 
    newNode->next = s->top; 
    s->top = newNode;
    printf("%d pushed to stack\n", value);
}

int pop(STACK* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop\n");
        return -1; 
    }
    NODE* temp = s->top; 
    int value = temp->data; 
    s->top = s->top->next; 
    free(temp); 
    return value;
}

int peek(STACK* s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Cannot peek\n");
        return -1; 
    }
    return s->top->data; 
}

void menu(STACK* s) {
    int choice, value;
        printf("\nStack Operations Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check if Stack is Empty\n");
        printf("5. Exit\n");
       
    while(1){    
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: 
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(s, value);
                break;

            case 2: 
                value = pop(s);
                if (value != -1) {
                    printf("Popped value: %d\n", value);
                }
                break;

            case 3: 
                value = peek(s);
                if (value != -1) {
                    printf("Top element is: %d\n", value);
                }
                break;

            case 4: 
                if (isEmpty(s)) {
                    printf("The stack is empty.\n");
                } else {
                    printf("The stack is not empty.\n");
                }
                break;

            case 5: 
                printf("Exiting the program.\n");
                return;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

int main() {
    STACK stack;
    
    create(&stack);

    menu(&stack);

    return 0;
}