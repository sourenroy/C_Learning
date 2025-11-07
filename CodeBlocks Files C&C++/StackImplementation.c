#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int val)
{
if (top >= MAX - 1)
{
    printf("Stack Overflow! Cannot push %d\n", val);
} else
{
top++;
stack[top] = val;
printf("Pushed %d onto the stack.\n", val);
}
}

void pop()
{
if (top == -1)
{
printf("Stack Underflow! Cannot pop.\n");
} else
{
printf("Popped %d from the stack.\n", stack[top]);
top--;

}
}

void peek()
{
if (top == -1)
{
printf("Stack is empty.\n");
}
else
{
printf("Top element is %d\n", stack[top]);
}
}

void display() {
if (top == -1)
{
printf("Stack is empty.\n");
}
else
{
printf("Stack elements: ");
for (int i = top; i >= 0; i--)
{
printf("%d ", stack[i]);
}
printf("\n");
}
}

int main()
{
int choice, value;

printf("Stack Implementation using Array\n");
while (1)
{
    printf("\nMenu:\n");
    printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

switch (choice)
{
case 1:printf("Enter value to push: ");
scanf("%d", &value);
push(value);
break;

case 2:pop();
break;

case 3:peek();
break;

case 4:display();
break;

case 5:printf("Exiting program.\n");
return 0;

default:printf("Invalid choice. Try again.\n");
}
}
return 0;
}
