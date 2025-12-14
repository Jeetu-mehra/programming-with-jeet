#include<stdio.h>
# define MAXSIZE 100

struct stack {
    int stArr[MAXSIZE];
    int top;
};
typedef struct stack STACK;

void push(STACK *s, int value){
  if(s->top==MAXSIZE-1){
  printf("stack over flow!!");
  return;
  }
  s->top++;
  s->stArr[s->top]=value;
  printf("pushed %d onto the stack. \n", value);
}  
void pop(STACK *s) {
    if(s->top==-1){
        printf("stack is already empty!! we connot pop elements\n");
        return;
    }
    printf("\n pop %d from the stack.\n", s->stArr[s->top+1]);
    s->top--;
}
void peak(STACK *s){
    if(s->top == -1) {
        printf("stack is empty!!\n");
        return;
    }
    printf("peak element is %d", s->stArr[s->top]);
}
void isFull(STACK *s){
    if(s->top==MAXSIZE-1){
        printf("yes, stack is full!!");
    }
    else{
    printf("\nstack is not full:");
    }
}
void isEmpty(STACK *s){
    if(s->top==-1){
        printf("yes, stack is empty!!");
    }
    else{
    printf("\nstack is not empty:");
    }
}
int main() {
    STACK s = {{0}, -1}; // Initialize stack with top = -1
    int n, choice;
    while (1) { // This loop will run indefinitely until the user enters a wrong choice
        printf("\nMenu:\n");
        printf("1. Push an element onto the stack\n");
        printf("2. Pop an element from the stack\n");
        printf("3. Get the peak element\n");
        printf("4. Check if the stack is empty\n");
        printf("5. Check if the stack is full\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter an element to push onto the stack: ");
                scanf("%d", &n);
                push(&s, n);
                break;

            case 2:
                pop(&s);
                break;

            case 3:
                printf("\nAccessing the peak element of the stack: \n");
                peak(&s);
                break;

            case 4:
                printf("\nChecking if the stack is empty:\n ");
                isEmpty(&s);
                break;

            case 5:
                printf("\nChecking if the stack is full: \n");
                isFull(&s);
                break;

            default:
                printf("\nYou entered a wrong choice. Exiting...\n");
                return 0; // Exit the program if the user enters an invalid choice
        }
    }
  
    return 0;
}