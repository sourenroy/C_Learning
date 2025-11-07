#include <stdio.h>
#define MAX 100
int queue[MAX];
int front = -1, rear = -1;
void enqueue();
void dequeue();
void display();
int main() {
int choice;
while (1) {
printf("\n--- Queue Operations Menu ---\n");
printf("1. Enqueue (Insert)\n");
printf("2. Dequeue (Delete)\n");
printf("3. Display Queue\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
printf("Exiting program.\n");
return 0;
default:
printf("Invalid choice! Please try again.\n");
}
}
return 0;
}
void enqueue()
{
int value;
if (rear == MAX - 1) {
printf("Queue is full! Cannot insert.\n");
} else {
printf("Enter value to insert: ");
scanf("%d", &value);
if (front == -1) {
front = 0; // First element

}
rear++;
queue[rear] = value;
printf("Inserted %d into queue.\n", value);
}
}
void dequeue()
{
if (front == -1 || front > rear) {
printf("Queue is empty! Cannot delete.\n");
} else {
printf("Deleted %d from queue.\n", queue[front]);
front++;
}
}
void display()
{
if (front == -1 || front > rear) {
printf("Queue is empty.\n");
} else {
printf("Queue elements: ");
for (int i = front; i <= rear; i++) {
printf("%d ", queue[i]);
}
printf("\n");
}
}

