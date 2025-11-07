//Q. Program implementing Priority Queue
#include <stdio.h>
#define SIZE 10
struct PriorityQueue
{
int data;
int priority;
};

struct PriorityQueue pq[SIZE];
int count = 0;
void enqueue(int data, int priority)
{
if (count == SIZE)
{
printf("Queue is Full!\n");
return;
}
pq[count].data = data;
pq[count].priority = priority;
count++;
printf("Inserted %d with priority %d\n", data, priority);
}
int getHighestPriorityIndex()
{
if (count == 0)
return -1;
int highest = 0;
for (int i = 1; i < count; i++)
{
if (pq[i].priority < pq[highest].priority)
{

highest = i;
}
}
return highest;
}
void dequeue()
{
if (count == 0)
{
printf("Queue is Empty!\n");
return;
}
int index = getHighestPriorityIndex();
printf("Deleted %d with priority %d\n", pq[index].data, pq[index].priority);
for (int i = index; i < count - 1; i++)
{
pq[i] = pq[i + 1];
}
count--;
}
void display()
{
if (count == 0)
{
printf("Queue is Empty!\n");
return;
}
printf("Priority Queue elements:\n");
for (int i = 0; i < count; i++)
{
printf("Value: %d, Priority: %d\n", pq[i].data, pq[i].priority);
}

}
int main()
{
int choice, data, priority;
while (1)
{
printf("\n--- Priority Queue Menu ---\n");
printf("1. Enqueue (Insert)\n");
printf("2. Dequeue (Delete highest priority)\n");
printf("3. Display\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("Enter value: ");
scanf("%d", &data);
printf("Enter priority (smaller number = higher priority): ");
scanf("%d", &priority);
enqueue(data, priority);
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
return 0;
default:
printf("Invalid choice! Try again.\n");

}
}
}
