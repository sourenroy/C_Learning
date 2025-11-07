#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int queue_arr[MAX];
int rear = -1;
int front = -1;
void insert (int item);
int del();
int peek();
void display();
int isFull();
int isEmpty();
void main()
{
int choice,item;
while(1)

{
printf("\n1.Insert\n");
printf("2. Delete\n");
printf("3. Display element at the front\n");
printf("4. Display all elemnts of the queue \n");
printf("5. Quit\n");
printf("Enter your choice:\n");
scanf("%d", &choice);
switch(choice)
{
case 1: printf("input the element for adding in queue:");
scanf("%d",&item);
insert(item);
break;
case 2: item = del();
printf("deleted element is %d \n", item);
break;
case 3: printf("element at the front is %d ",peek());
break;
case 4: display();
break;
case 5: exit(1);
default: printf("wrong choice");
}
}
}
void insert(int item)
{
if(isFull())
{
printf("Queue overflow");
return;
}
if(front == -1)
{
front = 0;
}
rear = rear + 1;
queue_arr[rear] = item ;
}
int del()

{
int item;
if(isEmpty())
{
printf("Queue underflow\n");
exit(1);
}
item = queue_arr[front];
front = front + 1;
return item;
}
int peek()
{
if(isEmpty())
{
printf("Queue underflow \n");
exit(1);
}
return queue_arr[front];
}
int isEmpty()
{
if (front==-1 ||front== rear +1)
{
return 1;
}
else
{
return 0;
}
}
int isFull()
{
if(rear == MAX-1)
return 1;
else
return 0;
}
void display()
{
int i;
if(isEmpty())
{
printf("Queue is Empty \n");
return;
}
printf("Queue is :\n\n");
for(i=front;i<=rear;i++)

{
printf("%d ",queue_arr[i]);
}
}

